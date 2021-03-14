#include <iostream>
#include "myArrayList.h"

using namespace std;

int main()
{
    myArrayList<int> *a1 = new myArrayList<int>();
    myArrayList<int> *a2 = new myArrayList<int>();
    myArrayList<int> *a3 = new myArrayList<int>();
    for(int i = 0;i<10;i++)
    {
        a1->add(3*i+1);
        a2->add(3*i+1);
        a3->add(3*i-1);
    }
    a1->print();

    cout<<"Is a1 same as a2: "<< (*a1 == *a2) <<endl;
    cout<<"Is a1 same as a3: "<< (*a1 == *a3) <<endl;
    cout<<"Is a2 same as a3: "<< (*a2 == *a3) <<endl;
    return 0;
}
