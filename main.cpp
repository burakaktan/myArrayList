#include <iostream>
#include "myArrayList.h"

using namespace std;

int main()
{
    myArrayList<int> *al = new myArrayList<int>();
    for(int i = 0;i<10;i++)
    {
        al->add(3*i+1);
    }
    al->print();
    return 0;
}
