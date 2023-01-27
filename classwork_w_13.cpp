#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
class Person
{
protected:
    char * name;
    char * adress;
    int age;
    char * gender;
public:
    Person(char * n,char * a,int y,char * g)
    {
        name = new char[strlen(n)+1];
        strcpy(name,n);
        adress = new char[strlen(a)+1];
        strcpy(adress,a);
        age = y;
        gender = new char[strlen(g)+1];
        strcpy(gender,g);
    }
    void print_info()
    {
        printf("%s\n",name);
        printf("%s\n",adress);
        printf("%d\n",age);
        printf("%s\n",gender);
    }
    ~Person()
    {
        delete [] name;
        delete [] adress;
        delete [] gender;
    }
};
class Student :virtual public Person
{
protected:
    int id;
    int level;
    char * dept;
public:
    Student(char * n,char * a,int y,char * g,int i,int l,char * d):Person(n,a,y,g)
    {
        id = i;
        level = l;
        dept = new char[strlen(d)+1];
        strcpy(dept,d);
    }
    void print_info()
    {
        Person::print_info();
        printf("%d\n",id);
        printf("%d\n",level);
        printf("%s\n",dept);
    }
};
class Worker :virtual public Person
{
protected:
    char * comp;
    int salary;
public:
    Worker(char * n,char * a,int y,char * g,char * c,int s):Person(n,a,y,g)
    {
        comp = new char[strlen(c)+1];
        strcpy(comp,c);
        salary = s;
    }
    int get_salary()
    {
        return salary;
    }
    void print_info()
    {
        Person::print_info();
        printf("%s\n",comp);
        printf("%d\n",salary);
    }
};
class Part_time_worker : public Student,Worker
{
protected:
    int hour;
public:
    Part_time_worker(char * n,char * a,int y,char * g,int i,int l,char * d,char * c,int s,int h):Worker(n,a,y,g,c,s),Student(n,a,y,g,i,l,d):Person(n,a,y,g);
    {
        hour = h;
    }
    double get_sal()
    {
        return (double)get_salary()/hour;
    }
    void print_info()
    {
        Person::print_info();
        Student::print_info();
        Worker::print_info();
        printf("%lf\n",get_sal());
    }
};
int main()
{
    /*Person p1("kazi","B/50 jakir Hossain road",22,"Male");
    p1.print_info();*/
    Student s1("kazi","B/50 jakir Hossain road",22,"Male",201814022,2,"CSE");
    s1.print_info();

}
