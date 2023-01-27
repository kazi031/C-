#include<iostream>
#include<cstring>
using namespace std;
class Department
{
    char * name;
    int id;
public:
    void set(char * n,int i)
    {
        name=new char[strlen(n)+1];
        strcpy(name,n);
        id = i;
    }
    void show()
    {
        cout<<name<<" "<<id<<" ";
    }
};
class Institute : public Department
{
    char * name;
    int  id;
public:
    void set(char * na,int ida,char * n,int i)
    {
        name=new char[strlen(na)+1];
        strcpy(name,na);
        id = ida;
        Department::set(n,i);
    }
    void show()
    {
        cout<<name<<" "<<id<<" ";
        Department::show();
    }
};
int main()
{
    Institute i1;
    i1.set("MIST",0,"CSE",2);
    i1.show();
}
