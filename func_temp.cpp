#include<stdio.h>
#include<iostream>
using namespace std;
template<typename T1,typename T2>
void copy1(T1 a[],T2 b[],int n)
{
    for(int i=0;i<n;i++)
    {
        a[i] = b[i];
    }
}
template<class T1,class T2>
void swapped(T1& x,T2& y)
{
    T1 tmp;
    tmp = x;
    x = y;
    y = tmp;
}
int main()
{
    int arr1[5] = {1,2,3,4,5};
    float arr2[5] = {5.1,6.2,7.3,8.4,9.5};
    char arr3[5] = {'a','b','c','d','e'};
    copy1(arr2,arr1,5);
    for(int i=0;i<5;i++)
    {
        printf("%g ",arr2[i]);
    }
    int y = 10;
    char z = 'a';
    swapped(y,z);
    printf("\n%c",y);
    printf("\n%d",z);
}
