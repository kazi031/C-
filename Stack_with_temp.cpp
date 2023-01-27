#include<stdio.h>
#include<iostream>
#define MAX 5
using namespace std;
class Stack_Full{};
class Stack_Empty{};
template<class Type>
class Stack
{
    Type* p;
    int top;
public:
    Stack()
    {
        top = -1;
    }
    void init()
    {
        p = new Type[MAX];
    }
    void push_back(Type val)
    {
        if(top<MAX-1)
        {
            p[++top] = val;
        }
        else
        {
            throw Stack_Full();
        }
    }
    Type pop_back()
    {
        Type temp = p[top];
        top--;
        return temp;
    }
    void print_arr()
    {
        for(int i=0;i<=top;i++)
        {
            cout<<p[i]<<" ";
        }
    }
    ~Stack()
    {
        delete [] p;
    }
};
int main()
{
    Stack<int> s1;
    s1.init();
    try
    {
        s1.push_back(1);
        s1.push_back(2);
        s1.push_back(3);
        s1.push_back(4);
        s1.push_back(5);
        s1.push_back(6);
    }
    catch(Stack_Full x)
    {
        printf("The Stack is Full!\n");
    }
    s1.print_arr();
 //   printf("\n");
//    Stack<char> s2;
//    s2.init(5);
//    s2.push_back('a');
//    s2.push_back('a');
//    s2.push_back('a');
//    s2.push_back('a');
//    s2.push_back('a');
//    s2.print_arr();
}
