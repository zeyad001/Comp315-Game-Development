#include "GameLoop.h"
#include <GL/freeglut.h>
#include "GameWorld.h"
GameLoop::GameLoop()
{
	run = true;
}

GameLoop::~GameLoop()
{
}

void display()
{
	
    // GL_DEPTH_BUFFER_BIT - resets the depth test values for hidden surface removal
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    // Reset transformations
glMatrixMode(GL_MODELVIEW);

glLoadIdentity();


gluLookAt(	0, 1.0f , 5  ,
				0, 1.0f ,  4 ,
				0.0f, 1.0f ,  0.0f);
glColor3ub(64, 64,  0); 

	
}
void initGL()
{
    // Set "clearing" or background color
    glClearColor(0, 0, 0, 1); // White and opaque

    glEnable(GL_DEPTH_TEST); // turns on hidden surface removal so that objects behind other objects do not get displayed
}
void reshape(int w, int h)
{

    // Prevent a divide by zero, when window is too short
    // (you cant make a window of zero width).
    if(h == 0)	h = 1;

    GLfloat ratio = 1.0f * (GLfloat)w / (GLfloat)h;

    // Set the viewport to be the entire window
    glViewport(0, 0, w, h);

    // Reset the coordinate system before modifying
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    // Set the clipping volume
    gluPerspective(45, ratio, 0.1, 100);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();



}
void GameLoop::init(int argc, char** argv)
{
	glutInit(&argc, argv);          // Initialize GLUT
   //glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowSize(640, 480);   // Set the window's initial width & height - non-square
    glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
    glutCreateWindow("This is not a Game");  // Create window with the given title
    glutReshapeFunc(reshape); 
   
    glutDisplayFunc(display);       // Register callback handler for window re-paint event
  
  

    initGL();                       // Our own OpenGL initialization
	
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
	 this->world.render();
	 glutMainLoopEvent(); 
	   glFlush();  // ******** DO NOT FORGET THIS **********
		   
}
void GameLoop::update()
{
}