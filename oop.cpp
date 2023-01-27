#include<iostream>
using namespace std;
class Number
{
    static int x;
    int y;
public:
    Number(int a,int b)
    {
        x=a;
        y=b;
    }

    static void set_x(int a)
    {
        x=a;
    }
    void set_y(int b)
    {
        y=b;
    }
    int get_x()
    {
        return x;
    }
    int get_y()
    {
        return y;
    }
};
//int Number::x=10;
int main()
{
    Number p1(3, 13),p2(10, 5);
//    p1.set_x(5);
    cout<<p2.get_x();
}
