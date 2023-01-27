#include<iostream>
#include<cmath>
using namespace std;
class Point
{
private:
    double x;
    double y;
public:
    void setx(int a)
    {
        x=a;
    }
    void sety(int b)
    {
        y=b;
    }
    void setxy(int a,int b)
    {
        x=a;
        y=b;
    }
    double getx()
    {
        return x;
    }
    double gety()
    {
        return y;
    }
    double dis_origin()
    {
        double c=sqrt(x*x+y*y);
        return c;
    }
    double distance(Point b)
    {
        double c=sqrt((b.x-x)*(b.x-x)+(b.y-y)*(b.y-y));
        return c;
    }
    Point centroid(Point a,Point b)
    {
        Point res;
        /*double n1=(x+a.x+b.x)/3;
        double n2=(y+a.y+b.y)/3;
        res.setxy(n1,n2);*/
        res.x=(x+a.x+b.x)/3;
        res.y=(y+a.y+b.y)/3;
        return res;
    }
    Point mid_point(Point b)
    {
        Point res;
        res.x=(x+b.x)/2;
        res.y=(y+b.y)/2;
        return res;
    }
};
int main()
{
    Point k;
    k.setx(5);
    k.sety(8);
    cout<<k.getx()<<" "<<k.gety()<<endl;
    k.setxy(9,10);
    cout<<k.getx()<<" "<<k.gety()<<endl;
    cout<<"The distance from Origin is:"<<k.dis_origin()<<endl;
    Point b;
    b.setxy(11,2);
    cout<<"distance from point b is:"<<k.distance(b)<<endl;
    Point n;
    n.setxy(4,6);
    Point c=k.centroid(b,n);
    cout<<"Centroid of the three point is:"<<c.getx()<<" "<<c.gety()<<endl;
    n.setxy(5,6);
    c=k.mid_point(n);
    cout<<"midpoint of the two point is:"<<c.getx()<<" "<<c.gety()<<endl;
    return 0;
}
