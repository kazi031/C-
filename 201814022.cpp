#include<iostream>
using namespace std;
class Attendence
{
    int present;
    int absent;
public:
    Attendence()
    {
        present=0;
        absent=0;
    }
    void set_present()
    {
        present++;
    }
    void set_absent()
    {
        absent++;
    }
    int get_absent()
    {
        return absent;
    }
    int get_present()
    {
        return present;
    }
    float att_percentage(int day)
    {
        float c=(float)present/day*100;
        return c;
    }
    ~Attendence()
    {

    }
};
int main()
{
    int num;
    Attendence std1;
    cout<<"Enter the number of days you want to count:";
    cin>>num;
    string s1;
    for(int i=1;i<=num;i++)
    {
        cin>>s1;
        if(s1=="p")
        {
            std1.set_present();
        }
        else if(s1=="a")
        {
            std1.set_absent();
        }
    }
    cout<<"Present:"<<std1.get_present()<<" days"<<endl;
    cout<<"Absent:"<<std1.get_absent()<<" days"<<endl;
    cout<<"pecentage:"<<std1.att_percentage(num)<<"%"<<endl;
    if(std1.att_percentage(num)<75)
    {
        cout<<"Attendence position >> dis-collegiate";
    }
    else if(std1.att_percentage(num)<90 && std1.att_percentage(num)>=75)
    {
        cout<<"Attendence position >> non-collegiate";
    }
}

