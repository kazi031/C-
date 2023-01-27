#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
class Student
{
    char * name;
    int id;
    char * gender;
    int level;
public:
    Student()
    {
        name=NULL;
        gender=NULL;
    }
    void set(char * n,int i,char * g,int l)
    {
        name = new char[strlen(n)+1];
        strcpy(name,n);
        id = i;
        gender = new char[strlen(g)+1];
        strcpy(gender,g);
        level = l;
    }
    void show_student()
    {
        printf("Student Name:%s\n",name);
        printf("Student Id:%d\n",id);
        printf("Student gender:%s\n",gender);
        printf("Level:%d\n",level);
    }

};
class Exam:public Student
{
    char * exam_name;
    int total_courses;
    int arr_exam[4];
public:
    void set_exam(char * e,int t,int *p)
    {
        exam_name = new char[strlen(e)+1];
        strcpy(exam_name,e);
        total_courses = t;
        for(int i = 0;i < 4;i++)
        {
            arr_exam[i]=p[i];
        }
    }
    void show()
    {
        show_student();
        printf("Exam name:%s\n",exam_name);
        printf("Total Courses:%d\n",total_courses);
        for(int i=0;i<total_courses;i++)
        {
            cout<<arr_exam[i]<<" ";
        }
         cout<<endl;
    }
};
int main()
{
    Exam e1;
    int arr[4]={80,80,80,80};
    e1.set("Kazi",201814022,"Male",2);
    /*for(int i = 0;i<4;i++)
    {
        prinf("Marks:");
        scanf("%d",arr[i]);
        cout<<endl;
    }*/
    e1.set_exam("Seconde Term",4,arr);
    e1.show();
}
