#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>

void display()
{
      glPointSize(5);//increase point size
    glClear(GL_COLOR_BUFFER_BIT);//color buffer clear korte si
    glBegin(GL_POINTS);

    glColor3f(1,0.2,0);//add pixel color
    glVertex2f(-0.5,0.2);//pixel position
    glVertex2f(-0.6,0.2);
    glVertex2f(-0.7,0.2);
    glVertex2f(-0.8,0.2);
    glVertex2f(-0.9,0.2);
 glColor3f(2,0.5,5);//add pixel color
     glVertex2f(-0.9,0.3);
      glVertex2f(-0.9,0.4);
       glVertex2f(-0.9,0.5);
        glVertex2f(-0.9,0.6);
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
