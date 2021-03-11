#include <cstdint>
#include <iostream>
#include "../h/component.h"

int main(int argc, char **argv)
{
    std::cout << "Component testing..." << std::endl;

    cComponent component1("component1", 0, 0);
    cComponent component2("component2", 0, 0);

    component1.cComponent_display();
    component2.cComponent_display();

    return 0;
}