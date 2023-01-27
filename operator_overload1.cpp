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
    /*ComplexNumber operator+(ComplexNumber p)
    {
        ComplexNumber ret;
        ret.real = real + p.real;
        ret.imaginary = imaginary + p.imaginary;
        return ret;
    }*/
    /*ComplexNumber operator-(ComplexNumber p)
    {
        ComplexNumber ret;
        ret.real = real - p.real;
        ret.imaginary = imaginary - p.imaginary;
        return ret;
    }
    bool operator==(ComplexNumber p)
    {
        if(real==p.real && imaginary==p.imaginary)
        {
            return true;
        }
        else
        {
            return false;
        }
    }*/
    /*ComplexNumber operator++()
    {
        real++;
        imaginary++;
        return *this;
    }
    ComplexNumber operator++(int a)
    {
        ComplexNumber ret(real,imaginary);
        real++;
        imaginary++;
        return ret;
    }*/
    ComplexNumber operator+=(ComplexNumber &p)
    {
        real = real + p.real;
        imaginary = imaginary + p.imaginary;
        return *this;
    }
    ComplexNumber& operator=(ComplexNumber &p)
    {
        real = p.real;
        imaginary = p.imaginary;
        //ComplexNumber ret(real,imaginary);
        //return ret;
        return *this;
    }
    ComplexNumber operator()(int x)
    {
        real = real + x;
        return *this;
    }
    void display()
    {
        printf("Resultant number : %d + %di\n",real,imaginary);
    }

   // friend ComplexNumber operator--(ComplexNumber &p);
   // friend ComplexNumber operator--(ComplexNumber &p,int a);
        friend ComplexNumber& operator-=(ComplexNumber &p1,ComplexNumber &p2);
        friend /*ostream&*/void operator << (ostream &out,ComplexNumber &p);
        friend void operator >> (istream &in,ComplexNumber &p);
};
/*ComplexNumber operator--(ComplexNumber &p)
{
    p.real = p.real - 1;
    p.imaginary = p.imaginary - 1;
    return p;
}
ComplexNumber operator--(ComplexNumber &p,int a)
{
    ComplexNumber ret(p.real,p.imaginary);
    p.real = p.real - 1;
    p.imaginary = p.imaginary - 1;
    return ret;
}*/
ComplexNumber& operator-=(ComplexNumber &p1,ComplexNumber &p2)
{
    p1.real = p1.real - p2.real;
    p1.imaginary = p1.imaginary - p2.imaginary;
    return p1;
}
/*ostream&*/void operator << (ostream &out,ComplexNumber &p)
{
    out << "Resultant number : "<<p.real<<" + "<<p.imaginary<<"i"<<endl;
    //return out;
}
void operator >> (istream &in,ComplexNumber &p)
{
    in>>p.real>>p.imaginary;
}
int main()
{
    ComplexNumber p1(2,3);
    ComplexNumber p2(3,4);
   // p1.display();
    //p2.display();
    ComplexNumber p3;
    //p3 = p1 - p2;
    //p3.display();
    /*if(p1 == p2)
    {
        printf("Numbers are Equal\n");
    }
    else
    {
        printf("Numbers are not Equal\n");
    }*/
    //p3 = p1++;
    //p1.display();
    //p3.display();
    //p3 = p1--;
    //p1.display();
    //p3.display();
    //p3 = p1-=p2;
    //p3.display();
    /*(p3 = p1)= p2;
    p1 = p2;
    cout << p1;
    cout << p2;
    cout << p3;
    p3 = (p1-=p2);
    cout << p1;
    cout << p2;
    cout << p3;*/
    p1(2);
    cout<<p1;
    ComplexNumber px;
    cin >> px;
    cout << px;
}
