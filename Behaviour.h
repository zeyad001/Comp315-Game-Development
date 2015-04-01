#include <string>
#include "Runnable.h"
#include "Renderable.h"
#include "ReceievesInput.h"
class Behaviour : public ReceievesInput, public Renderable, public Runnable
{

public:
    std::string name;
    virtual std::string getBehaviourName() = 0;
};