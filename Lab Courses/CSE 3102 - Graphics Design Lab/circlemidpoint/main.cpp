#include <windows.h>
#include <GL/glut.h>
#include <iostream>
using namespace std;

int r,x,y,p;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
     glPointSize(3);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,600.0,0.0,400.0);

    glColor3f(1,1,0);
    glBegin(GL_POINTS);

    x=0;
    y=r;
    p=1-r;

    while (x<=y)
    {
        glColor3f(0,1,1);
        glVertex2i(x+r,y+r);
        glVertex2i(y+r,x+r);
        glVertex2i(y+r,-x+r);
        glVertex2i(x+r,-y+r);
        glVertex2i(-x+r,-y+r);
        glVertex2i(-y+r,-x+r);
        glVertex2i(-y+r,x+r);
        glVertex2i(-x+r,y+r);
        if (p<0)
        {
            x=x+1;
            y=y;
            p=p+2*x+3;
        }
        else
        {
            x=x+1;
            y=y-1;
            p=p+2*x-2*y+5;
        }}
    glEnd();
    glFlush();
}
int main(int argc, char *argv[])
{
    cout<<"Enter the radius r:";
    cin>>r;
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

    glutCreateWindow("Midpoint Circle");
    glClearColor(0,0,0,1);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
