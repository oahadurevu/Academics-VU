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

    float xs=0.1;
    float ys=0.2,ye=0.7 ;

    if (ys>ye)
    {
        swap(ys,ye);
    }

    for( float y=ys ; y<=ye ; y+=0.01)
    {
        glColor3f(1,0,0);
        glVertex2f(xs,y);
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
