#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
class Course
{
protected:
    char  code[100];
    double credit;
public:
    Course(char * c,double d)
    {
        strcpy(code,c);
        credit = d;
    }
    virtual void printTotalMarks() = 0;
};
class Theory : public Course
{
protected:
    double CTMarks,midTermMarks,TermFinalMarks;
public:
    Theory(char * c,double d,double a,double b,double e): Course(c,d)
    {
        CTMarks = a;
        midTermMarks = b;
        TermFinalMarks = e;
    }
    void printTotalMarks()
    {
        printf("%s %.2lfcred : %.2lf\n",code,credit,CTMarks+midTermMarks+TermFinalMarks);
    }
};
int main()
{
    Course * c1;
    Theory t1("CSE-205",3.0,18,40.25,160);
    c1 = &t1;
    c1->printTotalMarks();
}
