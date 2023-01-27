#include<iostream>
using namespace std;
namespace SquareArea
{
    int Area(int a)
    {
        return a*a;
    }
}
using namespace SquareArea;
namespace CircleArea
{
    float Area(int a)
    {
        return 3.1416*a*a;
    }
}
int main()
{
    int a;
    cin>>a;
    cout<<CircleArea::Area(a)<<endl;
    cout<<Area(a)<<endl;
}
