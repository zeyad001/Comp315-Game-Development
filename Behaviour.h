

#ifndef BEHAVIOUR_H_
#define BEHAVIOUR_H_
#include <string>
#include "Runnable.h"
#include "Renderable.h"
#include "ReceivesInput.h"

class Behaviour : public ReceivesInput, public Renderable, public Runnable
{

public:
    std::string name;
    virtual void input() = 0;
    virtual void render() = 0;
    virtual void update() = 0;
    std::string getBehaviourName()
    {
	return name;
    }
};

#endif