#include<iostream>
#include<cstring>
using namespace std;
class Student
{
    int id;
    char* name;
public:
    /*Student()
    {
        id=0;
        name=NULL;
        cout<<"constructing "<<id<<endl;
    }*/
    Student(char *p,int i)
    {
        id=i;
        name=new char[strlen(p)+1];
        strcpy(name,p);
        cout<<"constructing "<<id<<" "<<name<<endl;
    }
    /*Student (const Student &m)
    {
        name=new char[strlen(m.name)+1];
        strcpy(name,m.name);
        id=m.id;
        cout<<"copy constructor of:"<<name<<" "<<id<<endl;
    }*/
    int get_id()
    {
        return id;
    }
    ~Student()
    {
        cout<<"destructing "<<id<<" "<<name<<endl;
        delete [] name;
    }
};
Student func(Student st)
{
    Student temp("st3",3);
    return temp;
}
int main()
{
    Student st1("st1",1),st2("st2",1);
    Student st3 = func(st1);
    cout<<st2.get_id()<<endl;
}
