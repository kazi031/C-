#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
class Point
{
    double x,y;
public:
    void init();
    void setx(double a);
    void sety(double b);
    void setxy(double a,double b);
    double getx();
    double gety();
    double disOrigin();
    double distance(Point P);
    Point Centroid(Point p,Point q);
    bool onXaxis;
    bool onYaxis;
};
void Point::init()
{
    cout<<"Initialization"<<endl;
    x=0;
    y=0;
}
void Point::setx(double a)
{
    x=a;
}
void Point::sety(double b)
{
    y=b;
}
void Point::setxy(double a,double b)
{
    x=a;
    y=b;
}
double Point::disOrigin()
{
    double distance=sqrt(x*x+y*y);
    return distance;
}
double Point::distance(Point p)
{
    double distance=sqrt((x-p.x)*(x-p.x)+((y-p.y)*(y-p.y)));
    return distance;
}
Point Centroid(Point a,Point b)
{
    Point k;
    k.x=(x+a.x+b.x)/3;
    k.y=(y+a.y+b.y)/3;
    return k;
}
double Point::getx()
{
    return x;
}
double Point::gety()
{
    return y;
}
int main()
{
    Point p;
    p.init();
    p.setx(5);
    p.sety(10);
    cout<<p.getx()<<" "<<p.gety()<<endl;
    cout<<"The distance from origin is>>"<<p.disOrigin();
    Point b;
    b.setxy(3,2);
    cout<<"\nThe distance from origin is>>"<<p.distance(b);
}
