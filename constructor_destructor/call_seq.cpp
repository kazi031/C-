#include<stdio.h>
#include<string.h>
using namespace std;
class Student
{
    int theory;
    int sessional;
    int id = 201814022;
public:
    Student(int t,int s)
    {
        printf("Class Student's Constructor is called!!\n");
        theory = t;
        sessional = s;
    }
    int get_theory()
    {
        return theory;
    }
    int get_sessional()
    {
        return sessional;
    }
    int get_id()
    {
        return id;
    }
    ~Student()
    {
        printf("Class Student's Destructor is called!!\n");
    }
};
class Person
{
    char * name;
public:
    Person(char * n)
    {
        printf("Class Person's constructor is called!!\n");
        name = new char[strlen(n)+1];
        strcpy(name,n);
    }
    char * get_name()
    {
        return name;
    }
    ~Person()
    {
        printf("Class Person's Destructor is called!!\n");
    }
};
class L4Student: public Person,Student
{
    int thesis;
public:
    L4Student(char * n,int t,int s,int thesis):Student(t,s),Person(n)
    {
        printf("Class L4Student's Constructor is called!!\n");
        this->thesis = thesis;
    }
    int get_thesis()
    {
        return thesis;
    }
    operator int()
    {
        return thesis + get_theory() + get_sessional();
    }
    void display()
    {
        printf("%s\n",get_name());
        printf("Student ID : %d\n",get_id());
        printf("Marks ::\n");
        printf("===============================================\n");
        printf("Theory\t\t|Sessional\t\t|Thesis\n");
        printf("  %d  \t\t|    %d   \t\t|  %d  \n",get_theory(),get_sessional(),get_thesis());
    }
    ~L4Student()
    {
       printf("Class L4Student's Destructor is called!!\n");

    }
};
int main()
{
    L4Student std1("Kazi",40,20,15);
    int total = std1;
    std1.display();
    printf("\n\nTotal Marks : %d\n\n\n",total);
}
