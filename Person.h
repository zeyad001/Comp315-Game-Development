#ifndef PERSON_H
#define PERSON_H
#include "Runnable.h"
#include "Renderable.h"
#include "ReceivesInput.h"
#include "Behaviour.h"
#include <vector>
#include <string>
#include "IModel.h"
class Person : public Runnable, public Renderable, public ReceivesInput, public IModel
{
public:
    std::vector<Behaviour*> behaviours;
    /*
    void addBehaviour(Behaviour* b)
    {
            behaviours.push_back(b);
    }

    */
    virtual void addBehaviour(Behaviour* b) = 0;
    virtual bool hasBehaviour(std::string s) = 0;
    virtual Behaviour* getBehaviour(std::string s) = 0;

    /*
    bool hasBehaviour(std::string s)
    {

            for(Behaviour *b : behaviours)
            {
                    if(std::strcmp(b->getBehaviourName(),s)
                    {
                            return true;
                    }
            }

            return false;
    }
    /*
    Behaviour getBehaviour(std::string s)
    {
            for(Behaviour *b : behaviours)
            {
                    if(strcmp(b->getBehaviourName(),s))
                    {
                            return b;
                    }
            }
            return nullptr;
    }
*/
};

#endif // PERSON_H
