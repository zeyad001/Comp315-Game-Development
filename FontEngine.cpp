#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>

using namespace std;

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
/**
class FontEngine{
	char* line;
	void* font;
public :
	FontEngine(char* newLine):line(newLine)
	{
		
		// OpenGL init
		glEnable(GL_DEPTH_TEST);
		glEnable(GL_CULL_FACE);
	};
	
	void setFont(void* newFont);
	
	void renderBitmapString(float x,
		float y,
		float z,
		void *font);
	
	void renderStrokeFontString(
		float x,
		float y,
		float z,
		void *font);
};


void FontEngine::renderBitmapString(
		float x,
		float y,
		float z,
		void *font) {

	char *c;
	glRasterPos3f(x, y,z);
	for (c=line; *c != '\0'; c++) {
		glutBitmapCharacter(font, *c);
	}
}

void FontEngine::renderStrokeFontString(
		float x,
		float y,
		float z,
		void *font) {  

	char *c;
	glPushMatrix();
	glTranslatef(x, y,z);
	glScalef(0.02f, 0.02f, 0.02f);
	for (c=line; *c != '\0'; c++) {
		glutStrokeCharacter(font, *c);
	}
	glPopMatrix();
}

void renderScene2() {
	//Clear information from last draw
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	
	glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
	glLoadIdentity(); //Reset the drawing perspective
	
	FontEngine newFont("Prashaan");
	//newFont.renderBitmapString(5,30,0,GLUT_BITMAP_HELVETICA_18);
	newFont.renderStrokeFontString(5,30,1,GLUT_STROKE_MONO_ROMAN);

	glutSwapBuffers(); //Send the 3D scene to the screen	
	glFlush();
}

void reshape(int w, int h)
{
   glViewport (0, 0, (GLsizei) w, (GLsizei) h);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);
   glMatrixMode(GL_MODELVIEW);
   glLoadIdentity();   
}


int main(int argc,char** argv)
{
	// init GLUT and create window
	glutInit(&argc, argv);
	
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(800,600);
	
	glutCreateWindow("Font Engine");
	glutReshapeFunc(reshape);
	glutDisplayFunc(renderScene2);

	// enter GLUT event processing cycle
	glutMainLoop();

	return 0;
}**/