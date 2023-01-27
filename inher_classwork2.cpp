#include<iostream>
#include<cstring>
#include<cstdio>
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
        title = NULL;
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

};
class Student
{
protected:
    int id;
    char * name;
    Course c[3];
public:
    Student(int i,)

};
int main()
{
    int arr[]={20,18,20};
    Course c1(201814022,"CSE-205",arr);
    printf("%d",c1.get_marks());
}
