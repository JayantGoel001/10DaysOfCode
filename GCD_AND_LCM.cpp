#include<iostream>
using namespace std;
int GCD(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return GCD(b,a%b);
    }
}
int main()
{
    int a,b;
    cout<<"Enter the value of a and b :\n";
    cin>>a>>b;
    int a1,b2;
    a1=a;
    b2=b;
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else if(a<b)
        {
            b=b-a;
        }
    }
    cout<<"GCD of "<<a1<<" and "<<b2<<" is "<<a<<endl;
    cout<<"LCM of "<<a1<<" and "<<b2<<" is "<<a1*b2/a<<endl;
    //Recursive Method of Euclid Algorithm
    cout<<"GCD of "<<a1<<" and "<<b2<<" is "<<GCD(a1,b2)<<endl;
    cout<<"LCM of "<<a1<<" and "<<b2<<" is "<<a1*b2/GCD(a1,b2)<<endl;
}
