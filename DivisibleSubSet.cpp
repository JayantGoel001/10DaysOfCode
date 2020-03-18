#include<iostream>
using namespace std;
int MC2(int n)
{
    return (n*(n-1))/2;
}
int main()
{
    int n;
    cout<<"Enter the value of n:\n";
    cin>>n;
    int *ar=new int[n];
    cout<<"Enter the values of array:\n";
    int *cumSum=new int[n];
    int *HashMap=new int[n];
    for(int i=0;i<n;i++)
    {
        HashMap[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(i==0)
        {
            cumSum[i]=(ar[i]%n);
        }
        else
        {
            cumSum[i]=(cumSum[i-1]+ar[i])%n;
        }
        HashMap[cumSum[i]]++;
    }
    int totalNumberOfSubset=0;
    for(int i=0;i<n;i++)
    {
        if(HashMap[i]>=2)
        {
            totalNumberOfSubset+=MC2(HashMap[i]);
        }
    }
    cout<<"Total Number of Good SubSet are: "<<totalNumberOfSubset;
}
