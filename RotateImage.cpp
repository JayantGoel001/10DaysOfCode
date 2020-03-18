#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n:\n";
    cin>>n;
    int **ar=new int*[n];
    for(int i=0;i<n;i++)
    {
        ar[i]=new int[n];
    }
    cout<<"Enter the Image:\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>ar[i][j];
        }
    }
    cout<<"\n\n Original Image :\n\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n/2;j++)
        {
            int temp=ar[i][j];
            ar[i][j]=ar[i][n-j-1];
            ar[i][n-j-1]=temp;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int temp=ar[i][j];
            ar[i][j]=ar[j][i];
            ar[j][i]=temp;
        }
    }
     cout<<"\n\n Rotated Image :\n\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
}
