#include<iostream>
#include<stdio.h>
#define MultifucntionPrinter M
using namespace std;
class Device
{
protected:
    int id;
public:
    Device(int i)
    {
        id = i;
    }
    void Display()
    {
        printf("This is a Device!\n");
        printf("ID >> %d\n",id);
    }
};
class Printer : virtual public Device
{
public:
    Printer(int i):Device(i)
    {

    }
    void Display()
    {
        printf("This is a Printer!\n");
        printf("ID >> %d\n",id);
    }
};
class Scanner : virtual public Device
{
public:
    Scanner(int i):Device(i)
    {

    }
    void Display()
    {
        printf("This is a Scanner!\n");
        printf("ID >> %d\n",id);
    }
};
class M : public Printer,Scanner
{
public:
    M(int i):Printer(i),Scanner(i),Device(i)
    {

    }
    void Display()
    {
        printf("This is a MultifunctionPrinter!\n");
        printf("ID >> %d\n",id);
    }
};
int main()
{
    Device d1(1001);
    d1.Display();
    Scanner s1(2002);
    s1.Display();
    Printer p1(3003);
    p1.Display();
    M m1(4004);
    m1.Display();
}
