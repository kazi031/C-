#include<iostream>
#include<cstring>
#include<cstdio>
class Document
{

public:
    char * name;
    Document()
    {
        name = NULL;
    }
};
class Scanner
{
    Document* d;
public:
    Scanner(Document * doc)
    {
        d = doc;
    }
    scan(char * p)
    {
        d->name = new char[strlen(p)+1];
        strcpy(d->name ,p);
    }
};
class Printer
{
    Document* d;
public:
    printer(Document * doc)
    {
        d = doc;
    }
    print()
    {
        printf("%s\n",d->name);
    }
};
int main
{
    Document Doc;
    Scanner s1(&Doc);
    Printer p1(&Doc);
    s1.scan("Kazi");
    p1.print();
}
