#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n:\n";
    cin>>n;
    int c=0;
    int n1=n;
    int n2=n;
    int n3=n;
    while(n!=0)
    {
        if(n%2==1)
        {
            c++;
        }
        n=n/2;
    }
    cout<<"Total number of Jump Hulk Needs :(Method 1=O(log(n) +1)) "<<c;
    c=0;
    while(n1!=0)
    {
        c+=(n1)&1;
        n1>>=1;
    }
    cout<<"\nTotal number of Jump Hulk Needs :(Method 2 =O(log(n)+1)) "<<c;
    c=0;
    while(n2>0)
    {
        n2=n2&(n2-1);
        c++;
    }
    //Its removes last bit
    cout<<"\nTotal number of Jump Hulk Needs :(Method 3 =O(Number of set bits)) "<<c;
    cout<<"\nTotal number of Jump Hulk Needs :(Method 4 =Using Inbuilt Method) "<<__builtin_popcount(n3);
}
