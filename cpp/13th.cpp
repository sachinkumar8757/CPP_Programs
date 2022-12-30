#include<iostream>
#include<math.h>;
using namespace std;
int main()
{
    int a,b,c;
    float D,r1,r2;
    cout<<"Enter cofficient of x^2 , x and constant term: "<<endl;
    cin>>a>>b>>c;
    if(a==0)
    {
        cout<<"Please enter valid cofficient";
        return 0;
    }
    D=((b*b)-(4*a*c));
    if(D==0)
    {
        cout<<"Roots are real and equal"<<endl;
        r1=r2=(-b/(2*a));
        cout<<"r1=r2= "<<r1;
    }
    else if(D>0)
    {
        cout<<"Roots are real and unequal"<<endl;
        r1=(-b+sqrt(D));
        r2=(-b-sqrt(D));
        cout<<"r1= "<<r1<<" , "<<"r2= "<<r2;
    }
    else{
        cout<<"Roots are imaginary"<<endl;
        int r1_real=(-b/2*a);
        float r1_img=(sqrt(-D)/(2*a));
         int r2_real=(-b/2*a);
        float r2_img=(sqrt(-D)/(2*a));
        cout<<"r1= "<<r1_real<<"+"<<r1_img<<"i"<<" , "<<"r2= "<<r2_real<<"-"<<r2_img<<"i";
    }
    return 0;
}