
#include "EventMessagingSystem.h"
#include "Event.h"
#include <iostream>

/*
 * Event id 1  : w a s d  movement float parm
 * Event id 2  : w a s d  + default stops movement float parm
 * Event id 3 : x , y int parm1,int parm 2, mouse
 *
 *
 * */

EventMessagingSystem::EventMessagingSystem()
{
}

EventMessagingSystem::~EventMessagingSystem()
{
}

Event EventMessagingSystem::getEvent(int id)
{

    for(Event& e : events) {

	if(e.getEventID() == id) {
	    return e;
	}
    }
    Event* emptyEvent = new Event();
    return *emptyEvent;
}

Event EventMessagingSystem::removeEventWithID(int id)
{

    Event* event = nullptr;
    int count = 0;

    for(Event& e : events) {

	if(e.getEventID() == id) {
	    event = &e;

	    break;
	}

	count++;
    }

    events.erase(events.begin() + count);

    // events.erase(remove_if(events.begin(),events.end(),removeEvent);

    return *event;
}

void EventMessagingSystem::displayAll()
{

    for(Event& e : events) {

    std:
	cout << e.getEventID() << "\n";
    }
}

bool EventMessagingSystem::listenForEvent(int id)
{
    for(Event& e : events) {

	if(e.getEventID() == id) {

	    return true;
	}
    }

    return false;
}

bool EventMessagingSystem::removeEvent(Event e, int id)
{
    bool flag = false;
    if(e.eventID == id) {
	flag = true;
    }

    return flag;
}

void EventMessagingSystem::createEvent(int id, char parm)
{
    bool duplicate = false;
    for(Event& e : events) {

	if(e.getEventID() == id) {
	    duplicate = true;
	    std::cout << "duplicate event\n";
	}
    }

    if(!duplicate) {
	Event* e1 = new Event(id, parm);
	events.push_back(*e1);
    }
}
void EventMessagingSystem::createEvent(int id, int x, int y)
{

    int count = 0;
    for(Event& e : events) {
	if(e.getEventID() == id) {
	    count++;
	    //std::cout << "duplicate event\n";
	}
    }

    if(count <= 12) {
	Event* e = new Event(id, x, y);
	events.push_back(*e);
    }
}

void EventMessagingSystem::createEvent(int id, int button, int state, int x, int y)
{
    Event* e = new Event(id, x, y);
    events.push_back(*e);
}
