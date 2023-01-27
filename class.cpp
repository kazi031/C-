#include<iostream>
#include<cstdio>
using namespace std;
//template<class T>
/*T abs(T x)
{
    if(x<0)
    {
        return -1*x;
    }
    else
    {
        return x;
    }
}*/
/*template<class T1,class T2>
void copy(T1 a[],T2 b[],int n)
{
    for(int i=0;i<n;i++)
    {
        a[i]=b[i];
    }
}*/
//template<class T>
/*void swapped(double &x,double &y)
{
    double temp;
    temp = x;
    x = y;
    y = temp;
}*/
template<class T>
void func(T a)
{
    printf("Inside generic func:");
    printf("%d",a);
}
void func(int a)
{
    printf("Inside specific function:");
    printf("%d",a);
}
int main()
{
    /*float n = -3;
    cout<<abs(n)<<" Is the value of n";*/
    /*int arr1[10]={5,10,15,2,6};
    float arr2[10]={11.2,2.2,2.3,5.3,5.6};
    char arr3[10]={'a','b','c','d','e'};
    copy(arr1,arr2,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;*/
    /*double x=5.3;
    double y=10.33;
    swapped(x,y);
    printf("%lf %lf is the value of x & y",x,y);*/
    int x=5;
    func(x);
    return 0;
}
