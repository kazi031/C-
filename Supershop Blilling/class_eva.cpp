#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
class Customer
{
private:
    string name;
    long int acc_num;
    string acc_type;
    int balance;
public:
    void set_name()
    {
        cout<<"Customer name:";
        getline(cin,name);
        //getchar();
    }
    void set_acc_num()
    {

        cout<<"Account number:";
        cin>>acc_num;
        getchar();
    }
    void set_acc_type()
    {
        cout<<"Account type:";
        cin>>acc_type;

    }
    void set_balance()
    {
        cout<<"Account balance:";
        cin>>balance;
        getchar();
    }
    string get_name()
    {
        return name;
    }
    long int get_acc_num()
    {
        return acc_num;
    }
    string get_acc_type()
    {
        return acc_type;
    }
    int get_balance()
    {
        return balance;
    }
    void print_all()
    {
        cout<<"Customer details:"<<endl;
        cout<<"Customer name:"<<get_name()<<endl;
        cout<<"Account number:"<<get_acc_num()<<endl;
        cout<<"Account type:"<<get_acc_type()<<endl;
        cout<<"Account balance:"<<get_balance()<<endl;
    }
    void deposit(int n)
    {
        balance=balance+n;
    }
    void withdraw(int n)
    {
        balance=balance-n;
    }

};

int main()
{
    Customer c1;
    c1.set_name();
    c1.set_acc_num();
    c1.set_acc_type();
    c1.set_balance();
    c1.print_all();
    while(c1.get_balance()>=0)
    {
    cout<<endl<<"Enter your transaction type:";
    string str;
    cin>>str;
    if(str=="diposit")
    {
        cout<<"Enter your amount:";
        int num;
        cin>>num;
        c1.deposit(num);
        cout<<"Successfully diposited."<<endl;
        c1.print_all();
    }
    else if(str=="withdraw")
    {
        int num;
        cout<<"Enter your amount:";
        cin>>num;
        if(num>c1.get_balance())
        {
            cout<<"Insufficient balance."<<endl;
        }
        else
        {
            cout<<"Successfully withdrawn."<<endl;
            c1.withdraw(num);
            c1.print_all();
            if(c1.get_balance()<500)
                cout<<"The balance is running low"<<endl;
        }
    }
    }
    return 0;
}
