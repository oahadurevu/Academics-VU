#include <windows.h>
#include <GL/glut.h>
#include <iostream>
using namespace std;

int rx, ry;        // radius (x-axis, y-axis)
int xc = 320, yc = 240; // center of ellipse (screen middle)

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1, 1, 0);
    glPointSize(2);

    glBegin(GL_POINTS);

    int x = 0;
    int y = ry;

    // -------- Region 1 --------
    float p1 = (ry * ry) - (rx * rx * ry) + (0.25 * rx * rx);

    while ((2 * ry * ry * x) <= s(2 * rx * rx * y))
    {
        // 4-way symmetry
        glVertex2i(xc + x, yc + y);
        glVertex2i(xc - x, yc + y);
        glVertex2i(xc - x, yc - y);
        glVertex2i(xc + x, yc - y);

        if (p1 < 0)
        {
            x++;
            p1 = p1 + (2 * ry * ry * x) + (ry * ry);
        }
        else
        {
            x++;
            y--;
            p1 = p1 + (2 * ry * ry * x) - (2 * rx * rx * y) + (ry * ry);
        }
    }

    // -------- Region 2 --------
    float p2 = (ry * ry * (x + 0.5) * (x + 0.5)) +
               (rx * rx * (y - 1) * (y - 1)) -
               (rx * rx * ry * ry);

    while (y >= 0)
    {
        // 4-way symmetry
        glVertex2i(xc + x, yc + y);
        glVertex2i(xc - x, yc + y);
        glVertex2i(xc - x, yc - y);
        glVertex2i(xc + x, yc - y);

        if (p2 > 0)
        {
            y--;
            p2 = p2 - (2 * rx * rx * y) + (rx * rx);
        }
        else
        {
            x++;
            y--;
            p2 = p2 + (2 * ry * ry * x) - (2 * rx * rx * y) + (rx * rx);
        }
    }

    glEnd();
    glFlush();
}

void init()
{
    glClearColor(0, 0, 0, 1);   // background black
    gluOrtho2D(0, 640, 0, 480); // coordinate system
}

int main(int argc, char** argv)
{
    cout << "Enter rx (x-axis radius): ";
    cin >> rx;

    cout << "Enter ry (y-axis radius): ";
    cin >> ry;

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutInitWindowSize(640, 480);
    glutCreateWindow("Midpoint Ellipse Drawing");

    init();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
