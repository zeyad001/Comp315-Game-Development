
#include "PlayerMovement.h"
#include <cstdlib>
#include <GL/freeglut.h>

int width, height;

float deltaMove, deltaShift;
PlayerMovement::PlayerMovement(EventMessagingSystem* listener)
{
    this->listener = listener;
    this->name = "PlayerMovement";
    deltaMove = 0.0f;
    deltaShift = 0.0f;
}

PlayerMovement::~PlayerMovement()
{
}

void PlayerMovement::input()
{
    // std::cout << "MOVE1" << std::endl;
    if(listener) {

	if(listener->listenForEvent(1)) {

	    Event e = listener->removeEventWithID(1);
	    //  std::cout << e.getParm()<< std::endl;
	    switch(e.getParm()) {

	    case 'w':
		forward();
		break;

	    case 's':
		backward();
		break;

	    case 'd':
		right();
		break;

	    case 'a':
		left();
		break;

		// case 'q': {
		// std::exit(0); q is too close to movement buttons
		// }
	    }
	}
	if(listener->listenForEvent(2)) {
	    // std::cout << "STOP" << std::endl;
	    Event e = listener->removeEventWithID(2);
	    // std::cout << e.getParm()<< std::endl;
	    switch(e.getParm()) {
	    case 'w':
	    case 's':
		deltaMove = 0.0f;
		break;
	    case 'd':
	    case 'a':
		deltaShift = 0.0f;
		break;
	    default:
		deltaMove = 0;
		deltaShift = 0;
	    }

	    //	std::cout<<  deltaMove<<" \n";
	}
	if(listener->listenForEvent(3)) {

	    Event e = listener->removeEventWithID(3);
	    this->mouseMove(e.parm1, e.parm2);
	    listener->displayAll();
	    std::cout << "end " << e.parm1 << " " << e.parm2 << "\n";
	}
	/*   if(listener->listenForEvent(4)) {
	       Event e = listener->removeEventWithID(4);
	       this->mouseButton(e.parm1, e.parm2, e.parm3, e.parm4);
	   } */
    }
}

void PlayerMovement::forward()
{
    this->deltaMove = 1.0f;
}
void PlayerMovement::backward()
{
    this->deltaMove = -1.0f;
}
void PlayerMovement::left()
{
    this->deltaShift = 1.0f;
}
void PlayerMovement::right()
{
    this->deltaShift = -1.0f;
}
/*
void PlayerMovement::turn(int)
{
}
void PlayerMovement::turnLeft()
{
}
void PlayerMovement::turnRight()
{
}
 */
 
void PlayerMovement::update()
{
}

void PlayerMovement::mouseMove(int x, int y)
{

    // std::cout << "im being called \n";
    width = glutGet(GLUT_WINDOW_WIDTH);
    height = glutGet(GLUT_WINDOW_HEIGHT);

    static bool just_warped = false;

    if(just_warped) {
	just_warped = false;
	return;
    }

    int dx = x - width / 2;
    int dy = y - height / 2;

    if(dx) {
	cam.rotateYaw(dx);
    }

    if(dy) {
	cam.rotatePitch(dy);
    }

    glutWarpPointer(width / 2, height / 2);

    just_warped = true;
}

void PlayerMovement::computePos(float dm, float ds)
{

    //  std::cout << dm << " " << ds << std::endl;
    // std::cout << "MOVE" << std::endl;
    if(dm) {
	// std::cout << dm << " " << ds << std::endl;
	cam.move(dm);
    }
    if(ds) {
	// std::cout << dm << " " << ds << std::endl;
	cam.strafe(ds);
    }
}

void PlayerMovement::render()
{

    if(deltaMove || deltaShift) {
	computePos(deltaMove, deltaShift);
    }
    cam.refresh();
}
void PlayerMovement::notify(int id)
{
}
