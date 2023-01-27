#include<iostream>
#include<cstdio>
using namespace std;
class Shape
{
    //virtual double area()=0;
protected:
    int dim1,dim2;
public:
    void read_dim()
    {
        printf("Input two dimensions:\n");
        scanf("%d %d",&dim1,&dim2);
    }
    virtual void final_area()
    {
        printf("The area is not defined\n");
    }
};
class Triangle : public Shape
{
   void final_area()
   {
       printf("The area of the triangle is %.3lf\n",(double).5*dim1*dim2);
   }
};
class Rectangle : public Shape
{
    void final_area()
   {
       printf("The area of the Rectangle is %.3lf\n",(double)dim1*dim2);
   }
};
int main()
{
    Shape * ptr;
    Shape s1;
    ptr = &s1;
    ptr->read_dim();
    ptr->final_area();
   // Shape * ptr;
    Triangle T1;
    ptr = &T1;
    ptr->read_dim();
    ptr->final_area();

    Rectangle R1;
    ptr = &R1;
    ptr->read_dim();
    ptr->final_area();
}
