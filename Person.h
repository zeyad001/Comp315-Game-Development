#ifndef PERSON_H
#define PERSON_H
#include "Runnable.h"
#include "Renderable.h"
#include "ReceievesInput.h"
#include "Behaviour.h"
#include <vector>
#include "Point.h"
class Person : public Runnable, public Renderable, public ReceievesInput
{
public:
    Point currentPosition;
    std::vector<Behaviour> behaviours;
    virtual addBehaviour(Behaviour) = 0;
};

#endif // PERSON_H
