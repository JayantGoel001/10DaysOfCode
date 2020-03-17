#include<iostream>
#include<math.h>
using namespace std;
int floorOf5DividedByNumberPowerI(int n,int i)
{
    return floor(n/pow(5,i));
}
int main()
{
    int n;
    cout<<"Enter the value of n:\n";
    cin>>n;
    int sum=0;
    int i=1;
    int x=floorOf5DividedByNumberPowerI(n,i);
    while(x!=0)
    {
        sum+=x;
        i++;
        x=floorOf5DividedByNumberPowerI(n,i);
    }
    cout<<"Number of trailing zeros ="<<sum;

}
