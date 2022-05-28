#include <GL\glut.h>
#include <iostream>
#include <windows.h>
using namespace std;

// Function to initialize the drivers
void myInit(void)
{
    // Clear all the screen color
    glColor3f(0.0f, 0.0f, 0.0f);

    // Sets background color to orang
    glMatrixMode(GL_PROJECTION);

    glLoadIdentity();

    // Specify the display area
    gluOrtho2D(0.0, 400.0, 0.0, 400.0);
}


void myDisplay(void)
{
    // Clear the screen buffer
    glClear(GL_COLOR_BUFFER_BIT);

    glPointSize(4.0);

    // Rectangular part of hut
    glColor3f(0.0f, 1.0f, 0.0f);

    // Begin the polygon
    glBegin(GL_POLYGON);

    // Create the polygon
    glVertex2i(40, 40);
    glVertex2i(320, 40);

    glVertex2i(40, 200);
    glVertex2i(320, 200);

    glVertex2i(40, 200);
    glVertex2i(40, 40);

    glVertex2i(320, 200);
    glVertex2i(320, 40);

    glEnd();

    // Right Window Update
    glColor3f(0.1f, 0.0f, 0.0f);

    // Begin the polygon
    glBegin(GL_POLYGON);

    // Create the polygon
    glVertex2i(220, 60);
    glVertex2i(300, 60);

    glVertex2i(220, 150);
    glVertex2i(300, 150);

    glVertex2i(220, 60);
    glVertex2i(220, 150);

    glVertex2i(300, 150);
    glVertex2i(300, 60);

    glEnd();

    // Right Window Update part 2
    glColor3f(1.0f, 0.0f, 0.0f);

    // Begin the polygon
    glBegin(GL_POLYGON);

    // Create the polygon
    glVertex2i(220, 170);
    glVertex2i(300, 170);

    glVertex2i(220, 190);
    glVertex2i(300, 190);

    glVertex2i(220, 170);
    glVertex2i(220, 190);

    glVertex2i(300, 190);
    glVertex2i(300, 170);

    glEnd();

    // Door
    glColor3f(0.60f, 0.42f, 0.16f);

    // Begin the polygon
    glBegin(GL_POLYGON);

    // Create the polygon
    glVertex2i(130, 40);
    glVertex2i(130, 160);

    glVertex2i(130, 160);
    glVertex2i(180, 160);

    glVertex2i(180, 100);
    glVertex2i(180, 40);

    glVertex2i(120, 40);
    glVertex2i(170, 40);

    glEnd();

    // Create Door Part 2
    glColor3f(0.50f, 0.42f, 0.16f);

    // Begin the polygon
    glBegin(GL_POLYGON);

    // Create the polygon
    glVertex2i(130, 170);
    glVertex2i(130, 180);

    glVertex2i(130, 180);
    glVertex2i(180, 180);

    glVertex2i(180, 170);
    glVertex2i(180, 180);

    glVertex2i(130, 170);
    glVertex2i(180, 170);

    glEnd();

    // Hut's top triangle part
    glColor3f(1.0f, 0.5f, 0.0f);

    // Begin the polygon
    glBegin(GL_POLYGON);

    // Create the polygon
    glVertex2i(10, 200);
    glVertex2i(340, 200);

    glVertex2i(200, 390);

    glVertex2i(10, 200);
    glVertex2i(200, 390);

    glEnd();


    glFlush();
}


int main(int argc, char** argv)
{

    glutInit(&argc, argv);


    glutInitDisplayMode(
        GLUT_SINGLE | GLUT_RGB);


    glutInitWindowSize(1000, 640);


    glutInitWindowPosition(0, 0);


    glutCreateWindow(" Hut "
                     " Create by Mamun");


    glutDisplayFunc(myDisplay);
    myInit();


    glutMainLoop();


    return 0;
}
