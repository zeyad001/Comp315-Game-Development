#include <stdio.h>
#include <thread>
#include "GameLoop.h"
#include <ctime>
#include <iostream>
#include <GL/freeglut.h>
int main(int argc, char** argv)
{
    GameLoop loop;
	int fps = 60;
	int skipticks = 1000/fps;
	time_t t=  time(0);
	time_t simulatedTime = 0;
	
	loop.init( argc,  argv);

    while(true) {

	while(!loop.isPaused()) {

		
	    loop.input();
		
		if(simulatedTime < t)
		{
	    simulatedTime += skipticks;
	    loop.update();
		std::cout << "update" << "\n";
		}
		t = time(0);
	
	    loop.render();
			std::cout << "render" << "\n";
			
			if(simulatedTime == 1200)
			{
				loop.pause();
			}
	}
    }
}
