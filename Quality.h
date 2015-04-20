#include <string>
#include "Runnable.h"
#include "Renderable.h"
#include "ReceivesInput.h"
class Quality : public ReceivesInput, public Renderable, public Runnable
{

public:
    std::string name;
    virtual std::string getQualityName() = 0;
};