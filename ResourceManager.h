#ifndef RESOURCEMANAGER_H
#define RESOURCEMANAGER_H
#include "objloader.h"
class ResourceManager
{
public:
    ResourceManager();
    ~ResourceManager();
    void requestModel(int model);
    void initModels();

    objloader* obj = nullptr;
};

#endif // RESOURCEMANAGER_H
