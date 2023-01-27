#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
class Teacher;
class Student
{
    char * dept;
public:
    Student()
    {
        dept = NULL;
    }
    void set_dept(char * p)
    {
        dept = new char[strlen(p)+1];
        strcpy(dept,p);
    }
    char * get_dept()
    {
        return dept;
    }
    /*bool dept_check(Teacher t1)
    {
        if(dept==t1.get_dept())
        {
            return true;
        }
        else
        {
            return false;
        }
    }*/
    bool check_dept(Teacher t1);
    ~Student()
    {
        delete [] dept;
    }
    //friend bool check_dept(Student &s1,Teacher &t1);
};
class Teacher
{
    char * dept;
public:
    Teacher()
    {
        dept = NULL;
    }
    void set_dept(char * p)
    {
        dept = new char[strlen(p)+1];
        strcpy(dept,p);
    }
    char * get_dept()
    {
        return dept;
    }
    ~Teacher()
    {
        delete [] dept;
    }
    //friend bool check_dept(Student &s1,Teacher &t1);
    friend bool Student::check_dept(Teacher t1);
};
bool Student::check_dept(Teacher &t1)
{
    if(strcmp(dept,t1.dept)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
/*bool check_dept(Student &s1,Teacher &t1)
{
    //printf("%s\n",s1.get_dept());
    //printf("%s\n",t1.get_dept());
    if(strcmp(s1.dept,t1.dept)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}*/
int main()
{
    Student s1;
    s1.set_dept("CSE");
    printf("%s\n",s1.get_dept());
    Teacher t1;
    t1.set_dept("CSE");
    printf("%s\n",t1.get_dept());

   // cout<<check_dept(s1,t1)<<endl;
   cout<<s1.check_dept(t1)<<endl;
}
