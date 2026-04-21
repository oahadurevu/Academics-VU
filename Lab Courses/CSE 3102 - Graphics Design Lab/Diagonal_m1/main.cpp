#include <windows.h>
#include <GL/glut.h>
#include <iostream>
using namespace std;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POINTS);
    float xs=.1,ys=.02,xe=.5,ye=.70;
    if(xs>xe)
    {
        swap(xs,xe);
        swap(ys,ye);
    }
    float x=xs,y=ys;
    for(x; x <= xe; x += 0.01)
    {
        glColor3f(1,1,0);
        glVertex2f(x,y);
        y += 0.01;
    }

    glEnd();
    glFlush();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE );
    glutCreateWindow("GLUT Shapes");
    glutDisplayFunc(display);
    glutMainLoop();
    return EXIT_SUCCESS;
}
