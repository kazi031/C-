#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
class Person
{
    char * name;
    int age;
    char * gender;
public:
    Person()
    {
        name=NULL;
        gender=NULL;
    }
    void set_person(char * p,int a,char * g)
    {
        name = new char[strlen(p)+1];
        strcpy(name,p);
        age = a;
        gender = new char[strlen(g)+1];
        strcpy(gender,g);
    }
    void show_person()
    {
        printf("Person's Name:%s\n",name);
        printf("Person's age:%d\n",age);
        printf("Person's gender:%s\n",gender);
    }
};
class Employee:public Person
{
    char * designation;
    char * department;
    int salary;
public:
    Employee()
    {
        designation = NULL;
        department = NULL;
    }
    void set_employee(char * des,char * dept, int sal)
    {
        designation = new char[strlen(des)+1];
        strcpy(designation,des);
        department = new char[strlen(dept)+1];
        strcpy(department,dept);
        salary = sal;
    }
    void show_employee()
    {
        show_person();
        printf("Desingnation:%s\n",designation);
        printf("Department:%s\n",department);
        printf("Salary:%d\n",salary);
    }
};
class Customer:public Person
{
    char * accout_type;
    char * acc_no;
    int balance;
public:
    Customer()
    {
        accout_type = NULL;
        acc_no = NULL;
    }
    void set_customer(char * type,char * no,int bal)
    {
        accout_type = new char[strlen(type)+1];
        strcpy(accout_type,type);
        acc_no = new char[strlen(no)+1];
        strcpy(acc_no,no);
        balance=bal;
    }
    void show_customer()
    {
        show_person();
        printf("Account type:%s\n",accout_type);
        printf("Account No.:%s\n",acc_no);
        printf("Balance:%d\n",balance);
    }

};
int main()
{
    /*Person p1;
    p1.set_person("Kazi",20,"Male");
    p1.show_person();*/
    Employee e1;
    e1.set_person("Kazi",20,"Male");
    //e1.show_person();
    e1.set_employee("Accountant","AIS",200000);
    e1.show_employee();
    Customer c1;
    c1.set_person("Kazi",20,"Male");
    c1.set_customer("FDR","201814022",250000);
    c1.show_customer();
}
