#include<iostream>
#include<cstdio>
using namespace std;
class Course
{
public:
   /* Course()
    {
        printf("Course is created!\n");
    }*/
    virtual void get_name() = 0;
   /* {
        printf("Course class is called!\n");
    }*/
};
class Theory : public Course
{
public:
    Theory()
    {
        printf("Theory is created!\n");
    }
    void get_name()
    {
        printf("Theory class is called!\n");
    }
};
class Sessional : public Course
{
public:
    Sessional()
    {
        printf("Sessional is created!\n");
    }
    void get_name()
    {
        printf("Sessional class is called!\n");
    }
};
class Thesis : public Course
{
public:
    Thesis()
    {
        printf("Thesis is created!\n");
    }
    void get_name()
    {
       printf("Thesis class is called!\n");
    }
};
int main()
{
    Course * obj;
    /*Theory t1;
    obj = &t1;
    obj->get_name();*/
    Course c1;
    obj = &c1;
    obj->get_name();
}
