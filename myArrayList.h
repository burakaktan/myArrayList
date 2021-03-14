#ifndef myArrayList_H
#define myArrayList_H
#include<iostream>

using namespace std;

template < class T >
class myArrayList
{
    public:
        myArrayList()
        {
            size = 0;
            capacity = 5;
            arr = new T[5];
        }
        void add(T x)
        {
            if(size < capacity)
            {
                arr[size++] = x;
            }
            else
            {
                genislet();
                add(x);
            }
            cout<<"Added "<<x<<" successfully"<<endl;
        }
        T getElementAt(int x) const
        {
            return arr[x];
        }
        void print() const
        {
            for(int i = 0;i<size;i++)cout<<arr[i]<<" ";
            cout<<endl;
        }
   private:
       void genislet()
       {
            T *yedek = new T[2*capacity];
            for(int i = 0;i<size;i++)
            {
                yedek[i] = arr[i];
            }
            capacity *= 2;
            swap(arr,yedek);
            delete []yedek;
        }
        T *arr;
        int size;
        int capacity;
};
#endif // myArrayList_H
