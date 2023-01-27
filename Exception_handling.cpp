#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
class Myexception
{
    char * p;
public:
    Myexception(char * e)
    {
        p = new char[strlen(e)+1];
        strcpy(p,e);
    }
    Myexception(const Myexception &obj)
    {
        p = new char[strlen(obj.p)+1];
        strcpy(p,obj.p);
    }
    char * get_massage()
    {
        return p;
    }
    ~Myexception()
    {
        delete [] p;
    }
};
int divide(int a,int b)
{
    if(b!=0)
    {
        return a/b;
    }
    else
    {
        //throw -1;
        //throw "divide by zero";
        Myexception Ex("Infinity");
        throw Ex;
    }
}
int main()
{
    int a = 11;
    int b = 0;
    int c;
    try
    {
        c = divide(a,b);
        printf("%d",c);
    }
    //catch(const char * e)
    catch(Myexception &obj)
    {
        //printf("division exception : %d" , i);
        //puts(e);
        //printf("%s",e);
        printf("%s",obj.get_massage());
        //cout<<e;
    }





}
