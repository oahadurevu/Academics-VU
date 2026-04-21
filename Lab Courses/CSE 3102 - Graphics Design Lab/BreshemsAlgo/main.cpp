#include<windows.h>
#include <GL/glut.h>
#include <iostream>
#include <cmath>
using namespace std;
float xs, ys, xe, ye;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(5);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,640.0,0.0,480.0);
    glBegin(GL_POINTS);

    float m=(ye-ys)/(xe-xs);
    cout <<"Value of m " << m;
    float dx = xe - xs;
    float dy = ye - ys;

    float del_x = abs(dx);
    float del_y = abs(dy);
     float del2_x=2*del_x,del2_y=2*del_y;

    if (m<1)
    {
        if (xs > xe)
        {
            swap(xs, xe);
            swap(ys, ye);
        }
        float x = xs, y = ys;
        float p = del2_y - del_x;
        for (int k = 0; k <= del_x; k++)
        {
             glColor3f(0,1,1);
            glVertex2i(round(x), round(y));
            if (p < 0)
            {
                x=x+1;
                y=y;
                p = p + del2_y;
            }
            else
            {
                x=x+1;
                y=y+1;
                p = p + del2_y - del2_x;
            }}}
    else
    {
        if (ys > ye)
        {
            swap(xs, xe);
            swap(ys, ye);
        }

        float x = xs, y = ys;
        float p = del2_x - del_y;

        for (int k = 0; k <= del_y; k++)
        {
            glColor3f(0,1,1);
            glVertex2i(round(x), round(y));

            if (p < 0)
            {
                x=x;
                y = y + 1;
                p = p + del2_x;
            }
            else
            {
                x=x+1;
                y=y+1;
                p = p + del2_x - del2_y;
            }}}
    glEnd();
    glFlush();
}

int main(int argc, char *argv[])
{
    cout<<"Enter Starting Point (x1 y1): ";
    cin>>xs>>ys;

    cout<<"Enter Ending Point (x2 y2): ";
    cin>>xe>>ye;

    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(100,100);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutCreateWindow("Bresenham Line Drawing");

    glClearColor(1.0,1.0,1.0,1.0);

    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
