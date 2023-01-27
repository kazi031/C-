#include<iostream>
#include<stdio.h>
using namespace std;
class ComplexNumber
{
    int real;
    int imaginary;
public:
    ComplexNumber()
    {
        real = 0;
        imaginary = 0;
    }
    ComplexNumber(int r,int i)
    {
        real = r;
        imaginary = i;
    }
    ComplexNumber operator+(ComplexNumber &p)
    {
        ComplexNumber ret;
        ret.real = real + p.real;
        ret.imaginary = imaginary + p.imaginary;
        return ret;
    }
    ComplexNumber operator*(int x)
    {
        ComplexNumber ret(real*x,imaginary*x);

        return ret;
    }
    ComplexNumber operator/(int x)
    {
        ComplexNumber ret(real/x,imaginary/x);

        return ret;
    }
    ComplexNumber operator+(int x)
    {
        ComplexNumber ret;
        ret.real = real + x;
        ret.imaginary = imaginary + x;
        return ret;
    }
    ComplexNumber operator-(ComplexNumber &p)
    {
        ComplexNumber ret;
        ret.real = real - p.real;
        ret.imaginary = imaginary - p.imaginary;
        return ret;
    }
    ComplexNumber operator-(int x)
    {
        ComplexNumber ret;
        ret.real = real - x;
        ret.imaginary = imaginary - x;
        return ret;
    }
    ComplexNumber operator*(ComplexNumber &p)
    {
        int x = real*p.real-imaginary*p.imaginary;
        int y = real*p.imaginary+imaginary*p.real;
        ComplexNumber ret(x,y);
        return ret;

    }
    ComplexNumber operator/(ComplexNumber p)
    {
        p.imaginary = (-1)*p.imaginary;
        int div = p.real*p.real + p.imaginary*p.imaginary;
        //printf("%d\n",div);
        int x = real*p.real-imaginary*p.imaginary;
        int y = real*p.imaginary+imaginary*p.real;
        ComplexNumber ret(x,y);
        ret.real = ret.real/div;
        ret.imaginary = ret.imaginary/div;
        return ret;
    }
    ComplexNumber operator++()
    {
        real++;
        return *this;
    }
    ComplexNumber operator++(int a)
    {
        ComplexNumber ret(real,imaginary);
        real++;
        return ret;
    }
    void display()
    {
        printf("Resultant number : %d + %di\n",real,imaginary);
    }
    friend ComplexNumber operator--(ComplexNumber &p);
    friend ComplexNumber operator--(ComplexNumber &p,int a);
};
ComplexNumber operator--(ComplexNumber &p)
{
    p.real = p.real - 1;
    return p;
}
ComplexNumber operator--(ComplexNumber &p,int a)
{
    ComplexNumber ret(p.real,p.imaginary);
    p.real = p.real - 1;
    return ret;
}
int main()
{
    ComplexNumber c1(2,3);
    ComplexNumber c2(3,4);
    c1.display();
    c2.display();
    ComplexNumber c3;
    c3 = c1 + c2;
    c3.display();
    ComplexNumber c4;
    c4 = c2 - c1;
    c4.display();
    ComplexNumber c5;
    c5 = c1 * c2;
    c5.display();
    ComplexNumber c6;
    c6 = c2/c1;
    c6.display();
    ComplexNumber c7;
    c7 = c1++;
    c7.display();
    c1.display();
    ComplexNumber c8;
    c8 = ++c1;
    c8.display();
    c1.display();
    ComplexNumber c9;
    c9 = c2--;
    c9.display();
    c2.display();
    ComplexNumber c10;
    c10 = --c2;
    c10.display();
    c2.display();
}
