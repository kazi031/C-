#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
class Equilateral_Triangle
{
protected:
    int side;
public:
    Equilateral_Triangle(int s)
    {
        side = s;
    }
    Equilateral_Triangle()
    {

    }
    void print_area()
    {
        double x;
        x = (double)sqrt(3)/4*side*side;
        printf("The area of The equilateral trianle is >> %.3lf",x);
    }

};
class Triangle:public Equilateral_Triangle
{
protected:
    int base;
    int height;
public:
    Triangle(int b,int h)
    {
        base = b;
        height = h;
    }
    Triangle(int s):Equilateral_Triangle(s)
    {

    }
    void print_area()
    {
        double n;
        n = (double)1/2*base*height;
        printf("The area of The trianle is >> %.3lf",n);
    }
};
int main()
{
   /* Equilateral_Triangle l1(4);
    l1.print_area();*/
    Triangle t1(30);
    t1.Equilateral_Triangle::print_area();

}
