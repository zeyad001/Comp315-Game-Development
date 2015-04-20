#ifndef EVENTMESSAGINGSYSTEM_H
#define EVENTMESSAGINGSYSTEM_H
#include <vector>
#include "Event.h"
#include <list>

using namespace std;
class EventMessagingSystem
{
public:
    EventMessagingSystem();
    ~EventMessagingSystem();
    vector<Event> events;
    bool listenForEvent(int);
    Event getEvent(int);
    Event removeEventWithID(int);
    void createEvent(int, char);
    void createEvent(int, int, int);
    void createEvent(int id, int button, int state, int x, int y);
    void displayAll();

private:
    bool removeEvent(Event, int);
};

#endif // EVENTMESSAGINGSYSTEM_H
