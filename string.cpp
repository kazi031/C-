#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    cout<<a<<endl;
    string str1="My name is kazi ";
    string str2="Rafid Raiyan";
    cout<<str1+str2;
    int count=0;
    for(int i=0;str1[i]!='\0';i++)
    {
        count++;
    }
    cout<<endl<<count<<endl;
    int length=count;
    for(int i=0;i<length;i++)
    {
        cout<<str1[i]<<" ";
    }
    int c=length-1;
    for(int i=0;i<length/2;i++)
    {
        char temp;
        temp=str1[i];
        str1[i]=str1[c];
        str1[c]=temp;
        c--;
    }
    for(int i=0;i<length;i++)
    {
        cout<<str1[i]<<" ";
    }
    //cout<<str1;
}
