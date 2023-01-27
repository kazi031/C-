#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class Course
{
protected:
    int id;
    char* title;
    int ct[3];

public:
    Course()
    {
        id = 0;
        title = NULL;
        for(int i=0;i<3;i++)
        {
            ct[i] = 0;
        }
    }
    void setter(int i,char * t,int c[])
    {
        id = i;
        title = new char[strlen(t)+1];
        strcpy(title,t);
        for(int i = 0;i<3;i++)
        {
            ct[i] = c[i];
        }
    }
    int get_marks()
    {
        for(int i = 0; i<2;i++)
        {
            for(int j =i+1;j<3;j++)
            {
                if(ct[i]<ct[j])
                {
                    swap(ct[i],ct[j]);
                }
            }
        }
        return ct[0]+ct[1];
    }
    void Display()
    {
        printf("Course ID >> %d\n",id);
        printf("Course Title >> %s\n",title);
        printf("Best 2 CT Marks >> %d\n",get_marks());
    }

};
class Student
{
    int id;
    char * name;
    Course c[3];
public:
    Student(int roll,char * n,Course arr[])
    {
        id = roll;
        name = new char[strlen(n)+1];
        strcpy(name,n);
        for(int i=0;i<3;i++)
        {
            c[i] = arr[i];
        }
    }
    int Total_marks()
    {
        int total = 0;
        for(int i=0;i<3;i++)
        {
            total = total + c[i].get_marks();
        }
        return total;
    }
    void Display()
    {
        printf("ID >> %d\n",id);
        printf("Name >> %s\n",name);
        printf("Individual >> %d\n",Total_marks());
        for(int i=0;i<3;i++)
        {
            c[i].Display();
        }
    }

};
int main()
{
    Course ar[3];
    int ct_205[3]={12,15,20};
    ar[0].setter(205,"CSE",ct_205);
    int ct_EECE[3]={15,16,17};
    ar[1].setter(269,"EECE",ct_EECE);
    int ct_DLD[3]={12,10,8};
    ar[2].setter(201,"DLD",ct_DLD);
    Student s1(201814022,"Kazi",ar);
    s1.Display();
}
