#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
class Std
{
    static int id;
    //int r;
public:
//    Std()
//    {
//        id = 0;
//        r = 0;
//    }
    void set_id(int a)
    {
        id = a;
    }
//    Std(int i,int reg)
//    {
//        id = i;
//        r = reg;
//    }
//    void print_id()
//    {
//        printf("%d ",id);
//        printf("%d\n",r);
//    }
    static void func(int n)
    {
        id = n;
        printf("%d is the number.\n",n);
    }
    void print_id()
    {
        printf("%d\n",id);
    }
};
int Std::id;
int main()
{
    //Std::func(10);
//    /*string str;
//    cin>>str;
//    cout<<str;
//    getline(cin,str);
//    cout<<str;*/
//    Std student[2];
//    //Std student2[2] = {(1,201814058),(2,201814059)};
//    Std student3[2] = {Std(1,201814022),Std(2,201814023)};
//    student[0].print_id();
//    //student2[1].print_id();
//    student3[0].print_id();
//    Std s2(10,201814010);
//    Std * s1;
//    s1 = student3;
//    s1[0].print_id();
    Std s1,s2;
    //s1.set_id(10);
    //s2.print_id();
    s1.func(15);
    s2.print_id();
}
