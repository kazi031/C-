 #include<iostream>
#include<cstring>
using namespace std;
class MyString
{
    char* str;
public:
    MyString()
    {
        str=new char[4];
        strcpy(str,"N/N");
        cout<<"default constructor"<<" "<<str<<endl;
    }
    MyString(const char *p)
    {
        str=new char[strlen(p)+1];
        strcpy(str,p);
        cout<<"constructing "<<str<<endl;
    }
    MyString(const MyString &obcopy)
    {
        int len=strlen(obcopy.str);
        str=new char[len];
        strcpy(str,obcopy.str);
        cout<<"copy constructor "<<str<<endl;
    }
    char *get_string()
    {
        return str;
    }
    ~MyString()
    {
        cout<<"destructing "<<str<<endl;
        delete [] str;
    }
};
MyString comp(MyString s1,MyString s2)
{
    //cout<<s2.get_string()<<endl;
    int len1=strlen(s1.get_string());
    int len2=strlen(s2.get_string());
    if(len1>len2)
    {
        return s1;
    }
    else
    {
        return s2;
    }
}
int main()
{
    MyString ob1,ob2("Second Object"),ob3("Third Object");
    cout<<"The bigger string is >>"<<comp(ob1,ob2).get_string()<<endl;
}
