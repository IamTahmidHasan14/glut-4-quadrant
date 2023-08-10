#include <windows.h>
#include <GL/glut.h>
void point_drawing()
{
    glClear(GL_COLOR_BUFFER_BIT);   ///buffer clear
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINES);      ///line drawing
        glVertex2f(-1.0,0.0);
        glVertex2f(1.0,0.0);
        glVertex2f(0.0,-1.0);
        glVertex2f(0.0,1.0);
    glEnd();

    glLineWidth(3.0f);
    ///1st quadrant
    glBegin(GL_LINES);
    glColor3f(1.0,0.0,0.0);
        glVertex2f(0.3,0.7);
        glVertex2f(0.7,0.7);

    glColor3f(0.0,1.0,0.0);
        glVertex2f(0.3,0.5);
        glVertex2f(0.7,0.5);

    glColor3f(0.0,0.0,1.0);
        glVertex2f(0.3,0.3);
        glVertex2f(0.7,0.3);

    ///2nd quadrant
    glColor3f(1.0,0.0,1.0);
        glVertex2f(-0.7,0.3);
        glVertex2f(-0.3,0.3);

        glVertex2f(-0.7,0.3);
        glVertex2f(-0.5,0.7);

        glVertex2f(-0.3,0.3);
        glVertex2f(-0.5,0.7);

    ///3rd quadrant
    glColor3f(1.0,1.0,0.0);
        glVertex2f(-0.7,-0.3);
        glVertex2f(-0.3,-0.3);

        glVertex2f(-0.3,-0.3);
        glVertex2f(-0.3,-0.7);

        glVertex2f(-0.3,-0.7);
        glVertex2f(-0.7,-0.7);

        glVertex2f(-0.7,-0.7);
        glVertex2f(-0.7,-0.3);

    ///4th quadrant
    glColor3f(0.0,1.0,1.0);
        glVertex2f(0.35,-0.3);
        glVertex2f(0.65,-0.3);

        glVertex2f(0.35,-0.3);
        glVertex2f(0.2,-0.5);

        glVertex2f(0.65,-0.3);
        glVertex2f(0.8,-0.5);

        glVertex2f(0.35,-0.7);
        glVertex2f(0.65,-0.7);

        glVertex2f(0.35,-0.7);
        glVertex2f(0.2,-0.5);

        glVertex2f(0.65,-0.7);
        glVertex2f(0.8,-0.5);
    glEnd();

    glColor3f(1.0,0.0,0.0);     ///color setting (3 for RGB)
    glPointSize(6.7);
    glBegin(GL_POINTS);     ///point drawing
        glVertex2f(-0.2,0.0);    //(2 for 2D)

    glColor3f(0.0,1.0,0.0);
        glVertex2f(-0.0,0.0);

    glColor3f(0.0,0.0,1.0);
        glVertex2f(0.2,0.0);
    glEnd();
    glFlush();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    ///glutInitWindowSize(850,480);
    glutInitWindowSize(1366,768);
    ///glutInitWindowPosition(250,150);
    glutInitWindowPosition(0,0);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE | GLUT_DEPTH); ///GLUT_DEPTH & GLUT_DOUBLE is only for 3D
    glutCreateWindow("LAB 1");

    glutDisplayFunc(point_drawing);
    glutMainLoop();
    return 0;
}
