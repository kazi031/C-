#include<iostream>
#include<sstream>
#include<cstring>
using namespace std;
int main()
{
    /*string s="1.2354";
    stringstream geek(s);
    float x=0;
    geek>>x;
    cout<<x;*/
    float num=1.2365;
    ostringstream st;
    st<<num;
    string geek=st.str();
    cout<<geek;
}
