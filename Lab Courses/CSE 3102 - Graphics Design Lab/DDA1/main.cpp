#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

float xs, ys, xe, ye;

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(3);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,640.0,0.0,480.0);
    glBegin(GL_POINTS);

    float dx = xe - xs;
    float dy = ye - ys;

    float m = dy / dx;
     cout<<"Value of M : " <<m<<endl;

    if (abs(m) < 1)
    {
        if (xs > xe)
        {
            swap(xs, xe);
            swap(ys, ye);
        }

        float y = ys;

        for (float x = xs; x <= xe; x += 1)
        {
            glColor3f(1.0, 0.0, 0.0);
            glVertex2i(round(x), round(y));
            y = y + m;
        }
    }
    else
    {
        if (ys > ye)
        {
            swap(xs, xe);
            swap(ys, ye);
        }

        float x = xs;

        for (float y = ys; y <= ye; y += 1)
        {
            glColor3f(1.0, 0.0, 0.0);
            glVertex2i(round(x), round(y));
            x = x + (1/m);
        }
    }

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

    glutCreateWindow("DDA Line Drawing - User Input");
    glClearColor(1.0,1.0,1.0,1.0);

    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
