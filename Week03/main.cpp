#include <GL/glut.h>
#include <math.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(0.7, 0.2, 0.7);
    glBegin(GL_POLYGON);
    for(int i=0; i<50; i++){
        float a=3.1415926*2/50*i;
        glVertex2f(cos(a), sin(a));
    }
    glEnd();
    glutSwapBuffers();
}
int main(int argc, char**argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("Week03-circle");

    glutDisplayFunc(display);

    glutMainLoop();
}
