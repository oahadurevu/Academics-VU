#include <bits/stdc++.h>
#include <GL/glut.h>

using namespace std;

float xs, ys, xe, ye;

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(2.0);
    glColor3f(0.0, 0.0, 0.0);

    float m = (ye - ys) / (xe - xs);
    cout << "Calculated Slope (m): " << m << endl;

    glBegin(GL_POINTS);
    if (abs(m) < 1) {
        float y = ys;
        for (float x = xs; x <= xe; x++) {
            glVertex2f(x, round(y));
            y += m;
        }
    } else {
        float x = xs;
        for (float y = ys; y <= ye; y++) {
            glVertex2f(round(x), y);
            x += 1 / m;
        }
    }
    glEnd();

    glFlush();
}
void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0);
    gluOrtho2D(0, 500, 0, 500);
}

int main(int argc, char** argv) {
    cout << "Enter Start Point (xs, ys): ";
    cin >> xs >> ys;
    cout << "Enter End Point (xe, ye): ";
    cin >> xe >> ye;

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("DDA Line Drawing");

    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
