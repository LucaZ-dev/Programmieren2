#include <iostream>
#include "binarytree.cpp"
#include <stdlib.h>     /* srand, rand */

using namespace std;

int main()
{
    binarytree tree;
    tree.add(50);
    for(int i = 0; i < 10; ++i) {
        tree.add(rand()%100);
    }

    tree.print(2);


}


