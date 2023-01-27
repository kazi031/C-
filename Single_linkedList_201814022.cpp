#include<iostream>
using namespace std;
struct Node
{
    int val;
    Node* next;
};
class LinkedList
{
    Node* head;
    int size;
public:
    LinkedList()
    {
        head=NULL;
        size=0;
    }
    void push_front(int v)
    {
        Node* temp=new Node;
        size++;
        temp->val=v;
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
        }
        else
        {
            temp->next=head;
            head=temp;
        }
    }
    void display()
    {
        if(head==NULL)
        {
            cout<<"There is no element"<<endl;
        }
        else
        {
            Node* temp;
            temp=head;
            while(temp!=NULL)
            {
                cout<<temp->val<<" ";
                temp=temp->next;
            }
        }
        cout<<endl;
    }
    void dispose()
    {
        Node* temp;
        while(head!=NULL)
        {
            temp=head;
            head=head->next;
            delete temp;
        }
    }
    int pop_front()
    {
        Node* temp;
        if(head==NULL)
        {
            cout<<"There is no element";
        }
        else
        {
            temp=head;
            int t=temp->val;
            head=head->next;
            size--;
            delete temp;
            return t;
        }
    }
    Node* search(int v)
    {
        Node* temp=head;
        while(temp!=NULL)
        {
            if(temp->val==v)
            {
                return temp;
            }
            else
            {
                temp=temp->next;
            }
        }
        return NULL;
    }
    Node* getElementat(int index)
    {
        Node* temp=head;
        if(head==NULL)
        {
            cout<<"There is no element"<<endl;
        }
        else
        {
            for(int i=0;i<index;i++)
            {
                temp=temp->next;
            }
            return temp;
        }
    }
    int get_size()
    {
        return size;
    }
    bool deleteat(int index)
    {
        Node* temp=head;
        if(head==NULL)
        {
            cout<<"There is no element";
            return false;
        }
        else
        {
            if(index==0)
            {
                pop_front();
                return true;
            }
            else if(index==1)
            {
                Node* temp2;
                temp2=temp->next;
                temp->next=temp->next->next;
                //int t=temp2->val;
                delete temp2;
                return true;
            }
            else
            {
                for(int i=0;i<index-1;i++)
                {
                    temp=temp->next;
                }
                Node* temp2;
                temp2=temp->next;
                temp->next=temp->next->next;
                int t=temp2->val;
                delete temp2;
                return true;
            }
        }
    }
    bool delete_value(int v)
    {
            Node* temp;
            temp=head;
            if(head==NULL)
            {
                cout<<"There is no element";
                return false;
            }
            else if(temp->val==v)
            {
                pop_front();
                return true;
            }
            else
            {
                Node* temp2;
                while(temp->next!=NULL)
                {
                    if(temp->next->val==v)
                    {
                        temp2=temp->next;
                        temp->next=temp->next->next;
                        delete temp2;
                        return true;
                    }
                    else
                    {
                        temp=temp->next;
                    }
                }
                return false;
            }
    }

    ~LinkedList()
    {
        cout<<endl<<"Destructing...";
        dispose();
    }
};
int main()
{
    LinkedList list1;
    /*list1.push_front(10);
    list1.push_front(20);
    list1.push_front(30);
    list1.push_front(40);
    list1.push_front(50);
    list1.push_front(60);
    list1.push_front(70);*/
    /*list1.display();
    cout<<list1.pop_front()<<" Has been deleted"<<endl;
    list1.display();
    Node* x=list1.search(30);
    if(x==NULL)
    {
        cout<<"Not Found";
    }
    else
    {
        cout<<x->val<<" is found"<<endl;
    }
    if(list1.get_size()==0)
    {
        cout<<"there is no element";
    }
    else
    {
        int index;
        main:;
        cout<<"Enter the index no. >>";
        cin>>index;
        //if(index<)
        if(index>=list1.get_size())
        {
            cout<<"Invalid Index"<<endl;
            goto main;
        }
        Node* y=list1.getElementat(index);
        if(y==NULL)
        {
            cout<<"Not Found"<<endl;
        }
        else
        {
            cout<<y->val<<endl;
        }
    }
    //cout<<list1.search(50)<<endl;
    cout<<list1.get_size()<<" is the size of the LinkedList"<<endl;
    int x1;
    main1:;
    cout<<"Enter the index no. >>";
    cin>>x1;
        //if(index<)
    if(x1>=list1.get_size())
    {
        cout<<"Invalid Index"<<endl;
        goto main1;
    }
    if(list1.deleteat(x1)==1)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
    list1.display();
    int num;
    cout<<"Enter the value you want to delete >> ";
    cin>>num;
    list1.delete_value(num);
    list1.display();*/
    cout<<"1. push_front()"<<endl;
    cout<<"2. printAll()"<<endl;
    cout<<"3. dispose()"<<endl;
    cout<<"4. pop_front()"<<endl;
    cout<<"5. search(value)"<<endl;
    cout<<"6. getElementAt(index)"<<endl;
    cout<<"7. deleteAt(index)"<<endl;
    cout<<"8. delete(val)"<<endl;
    int x2;
    cout<<"Enter option:";
    while(cin>>x2,x2!=9)
    {
        if(x2==1)
        {
            int num;
            cout<<"Enter number >>";
            cin>>num;
            list1.push_front(num);
            cout<<"Enter option:";
        }
        else if(x2==2)
        {
            cout<<"Resultant array:"<<endl;
            list1.display();
            cout<<"Enter option:";
        }
        else if(x2==3)
        {
            list1.dispose();
            cout<<"Enter option:";
        }
        else if(x2==4)
        {
            cout<<list1.pop_front()<<" Has been deleted"<<endl;
            cout<<"Enter option:";
        }
        else if(x2==5)
        {
            int num;
            cout<<"Enter number >>";
            cin>>num;
            Node* x=list1.search(num);
            if(x==NULL)
            {
                cout<<"Not Found"<<endl;
                cout<<"Enter option:";
            }
            else
            {
                cout<<x->val<<" is found"<<endl;
                cout<<"Enter option:";
            }
        }
        else if(x2==6)
        {
            if(list1.get_size()==0)
            {
                cout<<"there is no element";
                cout<<"Enter option:";
            }
            else
            {
                int index;
                main:;
                cout<<"Enter the index no. >>";
                cin>>index;
                //if(index<)
                if(index>=list1.get_size())
                {
                    cout<<"Invalid Index"<<endl;
                    goto main;
                }
                Node* y=list1.getElementat(index);
                if(y==NULL)
                {
                    cout<<"Not Found"<<endl;
                }
                else
                {
                    cout<<y->val<<endl;
                }
                cout<<"Enter option:";
            }
        }
        else if(x2==7)
        {
            int x1;
            main1:;
            cout<<"Enter the index no. >>";
            cin>>x1;
            //if(index<)
            if(x1>=list1.get_size())
            {
                cout<<"Invalid Index"<<endl;
                goto main1;
            }
            if(list1.deleteat(x1)==1)
            {
                cout<<"True"<<endl;
                cout<<"Enter option:";
            }
            else
            {
                cout<<"False"<<endl;
                cout<<"Enter option:";
            }
        }
        else if(x2==8)
        {
            int num;
            cout<<"Enter the value you want to delete >> ";
            cin>>num;
            if(list1.delete_value(num)==1)
            {
                cout<<"True"<<endl;
                cout<<"Enter option:";
            }
            else
            {
                cout<<"False"<<endl;
                cout<<"Enter option:";
            }
        }
    }
}
