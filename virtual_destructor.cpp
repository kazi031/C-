#include<stdio.h>
using namespace std;
class Base
{
public:
    Base()
    {
        printf("Hello from base!!\n");
    }
    virtual ~Base()
    {
        printf("Goodbye from base!!\n");
    }
};
class Derived : public Base
{
public:
    Derived()
    {
        printf("Hello from derived!!\n");
    }
    ~Derived()
    {
        printf("Goodbye from derived!!\n");
    }
};
int main()
{
    Base * b = new Derived();;
    delete b;
}
