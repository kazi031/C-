#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
class student
{
    int id;
    string name;
public:
    student()
    {

    }
    student(int i,string name1)
    {
        name=name1;
        id=i;
    }
    int get_id()
    {
        return id;
    }
    string get_name()
    {
        return name;
    }
};
int main()
{
    student st1(1,"raiyan"),st2;
    st2=st1;
    cout<<st2.get_id()<<endl;
    cout<<st2.get_name();
    char *str;
    cout<<endl<<strlen(str);
}
