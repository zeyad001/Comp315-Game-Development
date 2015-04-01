#include <string>
#include "Runnable.h"
#include "Renderable.h"
#include "ReceievesInput.h"
class Quality : public ReceievesInput, public Renderable, public Runnable
{

public:
    std::string name;
    virtual std::string getQualityName() = 0;
};