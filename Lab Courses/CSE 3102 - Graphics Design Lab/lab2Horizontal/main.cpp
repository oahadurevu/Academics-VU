#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void display()
{
    glPointSize(2);
    glClear(GL_COLOR_BUFFER_BIT);//color buffer clear korte si
    glBegin(GL_POINTS);

    float xs=0.1,xe=0.5;
    float ys=0.2 ;

    if (xs>xe)
    {
        swap(xs,xe);
    }

    for( float x=xs ; x<=xe ; x+=0.01)
    {
        glColor3f(1,0,0);
        glVertex2f(x,ys);
    }
    glEnd();

    glFlush();//pixel rendering
}
/* Program entry point */
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE | GLUT_DEPTH);

    glutCreateWindow("GLUT Shapes");


    glutDisplayFunc(display);

    glutMainLoop();
    return EXIT_SUCCESS;
}
