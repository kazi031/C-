#include<iostream>
#include<cstring>
using namespace std;
class MyString
{
    char* name;
public:
    MyString(char* n)
    {
        name=new char[strlen(n)+1];
        strcpy(name,n);
        cout<<"constructing..."<<name<<endl;
    }
    MyString(const MyString &m)
    {
        name=new char[strlen(m.name)+1];
        strcpy(name,m.name);
        cout<<"copy constructing...."<<name;
    }
    ~MyString()
    {
        cout<<"Destructing..."<<name<<endl;
        delete [] name;
    }
    friend char* concat(MyString s1,MyNumber n1);
};
class MyNumber
{
    int num;
public:
    MyNumber(int n)
    {
        num=n;
        cout<<"Constructing.."<<num<<endl;
    }
    ~MyNumber()
    {
        cout<<"Destructing.."<<endl;
    }
    friend char* concat(MyString s1,MyNumber n1);
};
char* concat(MyString s1,MyNumber n1)
{
    int n=n1.num;
    char num[10];
    int c=0;
    while(n!=0)
    {
        int rem=n%10;
        char temp=rem+'0';
        num[c]=temp;
        n=n/10;
    }
    char *name;
    name=new char[strlen(s1.name)+strlen(num)+1];
    strcpy(name,s1.name);
    int count=strlen(num);
    int length=strlen(s1.name)+strlen(num)+1;
    for(int i=strlen(s1.name)+1;i<length;i++)
    {
        name[i]=num[count-1];
        count--;
    }
    return name;

}
int main()
{
    MyString s1("kazi");
    MyNumber n1(201814022);
    char* temp=concat(s1,n1);
    char* name=new char[strlen(temp)+1];
    strcpy(name,temp);
    cout<<endl<<name;
}

