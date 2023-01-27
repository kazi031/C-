#include<stdio.h>
using namespace std;
class Base
{
protected:
    void hiddenmethod()
    {
        printf("This should not be publicly exposed!!\n");
    }
public:
    void openmethod()
    {
        printf("This should be visible by public!!\n");
    }
};
class Derived : public Base
{
protected:
    Base::openmethod;
public:
    Base::hiddenmethod;
};
int main()
{
    Derived d1;
    d1.hiddenmethod();
    //d1.openmethod();
    Base b1;
    b1.openmethod();
    //b1.hiddenmethod();
}
//#include<iostream>
//#include<string.h>
//
//using namespace std;
//
//class Student
//{
//    int id;
//    char* name;
//
//    public:
//
//    Student(char* n, int i)
//    {
//     name=new char[strlen(n)+1];
//        strcpy(name,n);
//
//        id=i;
//
//
//        cout<<"Constructing "<<name<<" id="<<id<<endl;
//
//    }
//
//    ~Student()
//    {
//
//        cout<<"destructing "<<name<<endl;
//        delete[]name;
//    }
//int getid()
//{
//    return id;
//}
//Student* func(Student &obj)
//{
// Student * temp = new Student("Hi st3",3);
//
//    return temp;
//
//}
//};
//
//
//
//
//int main()
//{
//    Student st1("Hi st1",1);
//     Student st2("Hi st2",2);
//    Student* st3 = st2.func(st1);
//
//
//}
