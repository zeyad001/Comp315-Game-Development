#include "ResourceManager.h"

ResourceManager::ResourceManager()
{

    obj = new objloader();
    initModels();
}

ResourceManager::~ResourceManager()
{
    delete obj;
}

void ResourceManager::initModels()
{
    obj->load("C:/Users/Zeyad/C++/C++CodeLite/Workspace/Demo/zombie.obj", nullptr);
    obj->load("C:/Users/Zeyad/C++/C++CodeLite/Workspace/Demo/pistol.obj", nullptr);
}

void ResourceManager::requestModel(int model)
{
}
