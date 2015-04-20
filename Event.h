#ifndef EVENT_H
#define EVENT_H

class Event
{
public:
    Event();
    ~Event();
    Event(int, char);
    Event(int, int, int);
    Event(int, int, int, int, int);
    int eventID;
    char parm;
    int parm2;
    int parm1;
    int parm3;
    int parm4;
    int getEventID();
    char getParm();
};

#endif // EVENT_H
