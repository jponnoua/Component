#include <cstdint>
#include <iostream>
#include "../h/component.h"

cComponent::cComponent(std::string in_name, uint64_t in_version, uint64_t in_revision)
{
    this->m_name = in_name;
    this->m_version.version = in_version;
    this->m_version.revision = in_revision;
}

cComponent::~cComponent()
{

}

void cComponent::cComponent_display()
{
    std::cout << "Name: " << this->m_name << " Version: " << this->m_version.version << " Revision: " << this->m_version.revision << std::endl;
}
