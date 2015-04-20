
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <cmath>

#include "GameLoop.h"
#include <GL/freeglut.h>
#include "GameWorld.h"
#include "Vec3f.h"
#include "Player.h"
#include "EventMessagingSystem.h"

EventMessagingSystem eventSystem;
GameWorld* gameWorld = nullptr;
GameLoop::GameLoop()
{
    run = true;
}

GameLoop::~GameLoop()
{
}

void display()
{

    // std::cout << "Display" << std::endl;
    // GL_DEPTH_BUFFER_BIT - resets the depth test values for hidden surface removal
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    // Reset transformations
    glMatrixMode(GL_MODELVIEW);

    glLoadIdentity();
    glColor3f(0.9f, 0.9f, 0.9f);

    gameWorld->render();
}
void initGL()
{
    // Set "clearing" or background color
    glClearColor(0, 0, 0, 1); // White and opaque

    glEnable(
        GL_DEPTH_TEST); // turns on hidden surface removal so that objects behind other objects do not get displayed
		
		
		
   GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
   GLfloat mat_shininess[] = { 50.0 };
   GLfloat light_position[] = { 10.0, 10.0, 10.0, 1.0 };
  // glClearColor (0.0, 0.0, 0.0, 0.0);
   glShadeModel (GL_SMOOTH);

   glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
   glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
   glLightfv(GL_LIGHT0, GL_POSITION, light_position);

   glEnable(GL_LIGHTING);
   glEnable(GL_LIGHT0);
   glEnable(GL_DEPTH_TEST);
   glEnable(GL_COLOR_MATERIAL);
		
		
		
}
void reshape(int w, int h)
{

    // Prevent a divide by zero, when window is too short
    // (you cant make a window of zero width).
    if(h == 0)
	h = 1;

    GLfloat ratio = 1.0f * (GLfloat)w / (GLfloat)h;

    // Set the viewport to be the entire window
    glViewport(0, 0, w, h);

    glLoadIdentity();
    // Reset the coordinate system before modifying
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    // Set the clipping volume
    gluPerspective(60, ratio, 0.1, 100);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}




void GameLoop::init(int argc, char** argv)
{
    glutInit(&argc, argv); // Initialize GLUT
    // glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowSize(1200, 900);          // Set the window's initial width & height - non-square
    glutInitWindowPosition(50, 50);         // Position the window's initial top-left corner
    glutCreateWindow("This is not a Game"); // Create window with the given title

    glutReshapeFunc(reshape);
    glutDisplayFunc(display);

    glutSetCursor(GLUT_CURSOR_NONE);
    glutWarpPointer(glutGet(GLUT_WINDOW_WIDTH) / 2, glutGet(GLUT_WINDOW_WIDTH) / 2);

    // this->input();
    // gameWorld.input();

    // glEnable(GL_DEPTH_TEST);

    initGL(); // Our own OpenGL initialization

    gameWorld = new GameWorld(&eventSystem);
}
/*

void processNormalKeys(unsigned char key, int xx, int yy)
{

        eventSystem.createEvent(1,key);

}

void releaseKey(unsigned char key, int x, int y)
{

  eventSystem.createEvent(2,key);


}
*/
void GameLoop::pause()
{
    run = false;
}
void GameLoop::resume()
{
    run = true;
}
bool GameLoop::isPaused()
{
    return !run;
}
void GameLoop::input()
{

    // glutIgnoreKeyRepeat(1);
    //  glutKeyboardFunc(processNormalKeys);
    // glutKeyboardUpFunc(releaseKey);
    gameWorld->input();
}
void GameLoop::render()
{
    // Register callback handler for window re-paint event
    // display();
    glutPostRedisplay();
    glutMainLoopEvent();
    glutSwapBuffers(); // ******** DO NOT FORGET THIS **********
}
void GameLoop::update()
{

    gameWorld->update();
}
