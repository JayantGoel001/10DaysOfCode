#include<iostream>
using namespace std;
//Prime Using Sieve in O(N*log(log(n)))
int main()
{
    int isPrimeNum[100005];
    int tot=100005;
    for(int i=0;i<tot;i++)
    {
        isPrimeNum[i]=1;
    }
    for(int i=2;i*i<=tot;i++)
    {
        if(isPrimeNum[i]==1)
        {
            for(int j=i*i;j<tot;j+=i)
            {
                isPrimeNum[j]=0;
            }
        }
    }
    isPrimeNum[0]=0;
    isPrimeNum[1]=0;
    int sumOfNumerOfPrime[tot];
    for(int i=0;i<tot;i++)
    {
        if(i==0)
        {
            sumOfNumerOfPrime[i]=0;
        }
        else
        {
            sumOfNumerOfPrime[i]=sumOfNumerOfPrime[i-1]+isPrimeNum[i];
        }
    }
    int n;
    cout<<"Enter the value of n:\n";
    cin>>n;
    int a,b;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the a and b:\n";
        cin>>a>>b;
        cout<<"Number of Prime Number between "<<a<<" and "<<b<<" = "<<sumOfNumerOfPrime[b]-sumOfNumerOfPrime[a]+isPrimeNum[a]<<endl;
    }

}
