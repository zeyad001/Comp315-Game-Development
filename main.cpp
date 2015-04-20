#include <stdio.h>
#include "GameLoop.h"
#include <iostream>

#ifdef WIN32
#else
#include <unistd.h>
#endif

void sleep(int time)
{

#ifdef WIN32
    Sleep(time);
#else
    usleep(time * 1000);
#endif
}

int main(int argc, char** argv)
{
    GameLoop loop;
    int fps = 120;
    int skipticks = 1000 / fps;
    // time_t t = time(0);
    // time_t simulatedTime = time(0);

    loop.init(argc, argv);

    while(true) {

	while(!loop.isPaused()) {

	    loop.input();
	    loop.update();

	    loop.render();
	    sleep(skipticks);
	    /*

	if(simulatedTime < t) {
	    simulatedTime += skipticks;
	    loop.update();


	}

	t = time(0);
 * /



	loop.render();

	/*
	if(simulatedTime == 1200)
	{
	        loop.pause();
	}
	    */
	}
    }
}
