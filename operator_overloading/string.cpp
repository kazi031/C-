#include<string.h>
#include<stdio.h>
using namespace std;
class String
{
    char * str;
    int length;
public:
    String(int i)
    {
        length = i;
        str = new char[i];
    }
    void set_string(char * name)
    {
        strcpy(str,name);
    }
    char * get_string()
    {
        return str;
    }
};
int main()
{
    String * s;
    s = new String(10);
    s->set_string("Raiyan");
    printf("%s",s->get_string());
}
/////FUNCTOR
//#include<stdio.h>
//using namespace std;
//class Account
//{
//    double rate;
//    double balance;
//public:
//    Account(double r,double b)
//    {
//        rate = r;
//        balance = b;
//    }
//    double operator()(int a)
//    {
//        return (double)rate*balance*a;
//    }
//};
//int main()
//{
//    Account a1(.2,1000);
//    double profit = a1(3);
//    printf("%g",1000+profit);
//}
