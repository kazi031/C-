#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
struct Arraylist
{
    int *p=NULL;
    int size=0;
    int capacity,icapacity;
    void init(int capacity_)
    {
        p=new int [capacity_];
        icapacity=capacity=capacity_;
    }
    void push_back(int value)
    {
        p[size]=value;
        size=size+1;
        if(size==capacity)
        {
            capacity=capacity+icapacity;
            p=(int*)realloc(p,capacity);
        }
    }
    void delete_last()
    {
        if(capacity-size==icapacity)
        {
            size=size-1;
            capacity=capacity-icapacity;
            p=(int*)realloc(p,capacity);
        }
        else
        {
            size=size-1;
        }
    }
    int search(int value)
    {
        for(int i=0;i<size;i++)
        {
            if(value==p[i])
                return i;
        }
        return -1;
    }
    int reverse()
    {
        int count=size-1;
        for(int i=0;i<=size/2;i++)
        {
            int temp=p[i];
            p[i]=p[count];
            p[count]=temp;
            count--;
        }
    }
    void print_all()
    {
        for(int i=0;i<size;i++)
        {
            cout<<p[i]<<" ";
        }
    }

    void dispose()
    {
        delete [] p;
    }
};
int main()
{
    Arraylist l1;
    l1.init(5);
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(5);
    l1.push_back(6);
    l1.push_back(7);
    l1.push_back(8);
    l1.push_back(9);
    l1.print_all();
    l1.delete_last();
    l1.delete_last();
    l1.delete_last();
    printf("\n");
    l1.print_all();
    cout<<"\n"<<l1.search(2)<<endl;
    l1.reverse();
    l1.print_all();
    l1.delete_last();
    printf("\n");
    //l1.push_back(5);
    l1.print_all();
    l1.dispose();
}
