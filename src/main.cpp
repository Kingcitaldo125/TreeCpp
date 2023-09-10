#include <iostream>

#include "Tree.hpp"

int main()
{
    Tree t;

    t.add(4);
    t.add(1);
    t.add(3);
    t.add(5);

    t.traverse();

    return 0;
}
