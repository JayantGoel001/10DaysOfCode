#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==n/2 || j==n/2)
            {
                cout<<"* ";
            }
            else if(i==0 && j>n/2)
            {
                cout<<"* ";
            }
            else if(j==0 && i<n/2)
            {
                cout<<"* ";
            }
            else if(i==n-1 && j<n/2)
            {
                cout<<"* ";
            }
            else if(j==n-1 && i>n/2)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
}
