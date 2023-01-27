#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
class String
{
    char *str;
public:
    String(char *a) //Constructor
    {
        str=new char[strlen(a)+1];
        strcpy(str,a);
        cout<<"Constructing "<<str<<endl;
    }
    char* get_string()
    {
        return str;
    }
    char* concat(char* a)
    {
        int x=strlen(a)+strlen(str);
        char *new_str=new char[x+1];
        strcpy(new_str,str);
        int c=0;
        new_str[strlen(str)]=' ';
        for(int i=strlen(str)+1;i<=x;i++)
        {
            new_str[i]=a[c];
            c++;
        }
        new_str[x+1]='\0';
        return new_str;
    }
    char* concat(int i)
    {
        char x=int_to_char(i);
        int len=strlen(str);
        str=(char*)realloc(str,len*sizeof(len+1));
        str[len]=x;
        return str;
    }
    char int_to_char(int i)
    {
        char x;
        x=i+'0';
        return x;
    }
    ~String() //destructor
    {
        cout<<"Destructing "<<str<<endl;
        delete [] str;
    }
};
int main()
{
    //string s1;
    //cin>>s1;
    String S1("Kazi Rafid");
    cout<<S1.get_string()<<endl;
    String S2("CSE-205");
    cout<<S2.get_string()<<endl;
    cout<<S1.concat("Raiyan")<<endl;
    cout<<S1.concat(1)<<endl;
}
