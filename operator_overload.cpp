#include<iostream>
#include<cstdio>
using namespace std;
class Time
{
    int hour;
    int min;
    int sec;
public:
    Time(int h,int m,int s)
    {
        hour = h;
        min = m;
        sec = s;
    }
    void Show()
    {

        printf("Time >>");
        printf("%d:%d:%d\n",hour,min,sec);
    }
    Time operator+(Time t)
    {
        Time ret(hour+t.hour,min+t.min,sec+t.sec);
        return ret;
    }
    Time operator++()
    {
        Time ret(hour,min,sec++);
        return ret;
    }
   /* Time operator<<(Time t)
    {
        t.show();
    }*/
    friend ostream& operator <<(ostream &out,Time &tm);
    //friend ostream& operator >>(istream &in,Time &tm);
    friend bool compare(Time t1,Time t2);
};
ostream& operator <<(ostream &out,Time &tm)
{
    out << tm.hour << ":"<<tm.min<<":"<<tm.sec<<endl;
    return out;
}
/*istream& operator >>(istream &in,Time &tm)
{
    in >> tm.hour >> tm.min >>tm.sec;
    return in;
}*/
bool compare(Time t1,Time t2)
{
    if(t1.hour == t2.hour && t1.min == t2.min && t1.sec == t2.sec )
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    Time t1(10,10,10);
    Time t2(5,5,5);
    Time t3 = t1 + t2;
    t3.Show();
    ++t3;
    t3.Show();
    cout<<t3;
    cout<<compare(t1,t1);

}
