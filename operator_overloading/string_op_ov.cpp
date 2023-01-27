#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class String
{
    char * ptr;
    int len;
public:
    String()
    {
        ptr = NULL;
        len = 0;
    }
    String(const char * p)
    {
        len = strlen(p);
        ptr = new char[len+1];
        strcpy(ptr,p);
    }
    String(const String &obj)
    {
        len = obj.len;
        ptr = new char[len+1];
        strcpy(ptr,obj.ptr);
        printf("Copy Constructor Called!\n");
    }
    String& operator=(const char * p)
    {

        len = strlen(p);
        ptr = new char[strlen(p)+1];
        strcpy(ptr,p);
        return *this;
    }
    char operator[](int index)
    {
        if(index<0 || index >len)
        {
            return '\0';
        }
        else
        {
            return ptr[index];
        }
    }
    int operator[](char p)
    {
        for(int i=0;i<len;i++)
        {
            if(ptr[i]==p)
            {
                return i;
            }
        }
         return -1;
    }
    String operator=(String &ob)
    {
        len = ob.len;
        if(ptr!=NULL)
            delete [] ptr;
        ptr = new char[len+1];
        strcpy(ptr,ob.ptr);
        return *this;
    }
    void Show()
    {
        printf("Name >> %s\n",ptr);
       // printf("Length >> %d\n",len);
    }
    ~String()
    {
        if(ptr != NULL)
            delete [] ptr;
    }
};
int func(String s)
{
   return 1;
}
int main()
{
    String s1("Kazi");
    s1.Show();
    //func(s1);
    String s2;
    s2 = "Hello World!";
    s2.Show();
//    s1 = s2;
//    s1.Show();
//    char e = s2[3];
//    if(e == '\0')
//    {
//        printf("Invalid!\n");
//    }
//    else
//    {
//        printf("%c\n",e);
//    }
//    int x = s1['l'];
//    if(x==-1)
//    {
//        printf("Not Found!\n");
//    }
//    else
//    {
//        printf("The Index is >> %d\n",x);
//    }
}
