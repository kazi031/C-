//#include<stdio.h>
//#include<string.h>
//using namespace std;
//class Name
//{
//    char * first_name;
//    char * last_name;
//public:
//    Name(char * p1,char * p2)
//    {
//        first_name = new char[strlen(p1)+1];
//        strcpy(first_name,p1);
//        last_name = new char[strlen(p2)+1];
//        strcpy(last_name,p2);
//    }
//    operator char*()
//    {
//        int len = strlen(first_name)+strlen(last_name);
//        char * t = new char[len+1];
//        strcpy(t,first_name);
//        strcat(t,last_name);
//        t[len]  = '\0';
//        return t;
//    }
//};
//
//
//
//
//
//
//
//
//class Subject
//{
//    double theory;
//    double sessional;
//public:
//    Subject(double p1,double p2)
//    {
//        theory = p1;
//        sessional = p2;
//    }
//    operator double()
//    {
//        return theory + sessional;
//    }
//};
//int main()
//{
////    Subject CSE205(50.20,20.21);
////    double total_marks = CSE205;
////    printf("%g",total_marks);
//    Name name1("Kazi"," Rafid Raiyan");
//    char * p = name1;
//    printf("%s",p);
//}


#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;


/*class ComplexNumber
{
    int real;
    int imaginary;

public:

    ComplexNumber()
    {
        real=0;
        imaginary=0;
    }

    ComplexNumber(int a, int b)
    {

        real=a;
        imaginary=b;
    }

    void display()
    {

        cout<<real<<"+"<<imaginary<<"i"<<endl;

    }

    ComplexNumber operator+(ComplexNumber &obj)
    {

        real=real+obj.real;
        imaginary=imaginary+obj.imaginary;

        return *this;

    }




};

*/



class Point
{
    int x;
    int y;

public:
    Point(){

    x=0;
    y=0;

    }
    Point(int a, int b)
    {

        x=a;

        y=b;

    }

    Point& operator +(Point &obj)
    {
        x=x+obj.x;
        y=y+obj.y;

        return *this;

    }

    void * operator new[](size_t sz)
    {
        printf("Memory allocating!!\n");
        void * p = malloc(sz);
        return p;
    }
    void operator delete[](void * p)
    {
        printf("Memory disallocating!!\n");
        free(p);
    }
    void display()
    {

//        cout<<"X is : \n"<<x<<endl;
//        cout<<"Y is : "<<y<<endl;
            printf("The resultant point is : ");
            printf("(%d,%d)\n",x,y);

    }
    friend Point  operator+(int n,Point obj);

};

Point  operator+(int n,Point obj)
{
//    obj.x=n+obj.x;
//
//    obj.y=n+obj.y;
//
//    return obj;
        int x = n + obj.x;
        int y = n + obj.y;
        Point ret(x,y);
        return ret;
}



int main()
{

//    Point p(1,2), q(2,3);
//
//    Point r;
//
//    r=p+q;
//
//
//    r.display();
//
//    Point r1;
//    r1 = 6+r;
//
//    r1.display();
    Point * pt = new Point[2]{Point(1,2),Point(4,5)};
    pt[0].display();
    pt[1].display();
/*ComplexNumber a(1,2),b(3,4);
ComplexNumber c;
c=a+b;

c.display();
*/
    delete [] pt;
}



















