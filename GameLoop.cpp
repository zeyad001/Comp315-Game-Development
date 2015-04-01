#include "GameLoop.h"
#include <GL/freeglut.h>
GameLoop::GameLoop()
{
	run = true;
}

GameLoop::~GameLoop()
{
}

void display()
{
	
}
void initGL()
{
    // Set "clearing" or background color
    glClearColor(0, 0, 0, 1); // White and opaque

    glEnable(GL_DEPTH_TEST); // turns on hidden surface removal so that objects behind other objects do not get displayed
}

void GameLoop::init(int argc, char** argv)
{
	glutInit(&argc, argv);          // Initialize GLUT

    glutInitWindowSize(640, 480);   // Set the window's initial width & height - non-square
    glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
    glutCreateWindow("This is not a Game");  // Create window with the given title

   
    glutDisplayFunc(display);       // Register callback handler for window re-paint event
  

    initGL();                       // Our own OpenGL initialization
 //glutMainLoop();
   glutMainLoopEvent();               // Ente
}

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
}
void GameLoop::render()
{
}
void GameLoop::update()
{
}