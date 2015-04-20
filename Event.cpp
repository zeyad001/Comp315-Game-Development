#include "Event.h"

Event::Event()
{
    eventID = 0;
    parm = ' ';
}
Event::Event(int id, char parm)
{
    eventID = id;
    this->parm = parm;
}
Event::Event(int id, int parm1, int parm2)
{
    eventID = id;
    this->parm1 = parm1;
    this->parm2 = parm2;
}

Event::Event(int id, int parm1, int parm2, int parm3, int parm4)
{
    eventID = id;
    this->parm1 = parm1;
    this->parm2 = parm2;
    this->parm3 = parm3;
    this->parm4 = parm4;
}

Event::~Event()
{
}

int Event::getEventID()
{
    return eventID;
}

char Event::getParm()
{
    return parm;
}
