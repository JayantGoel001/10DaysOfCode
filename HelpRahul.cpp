#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n:\n";
    cin>>n;
    int *ar=new int[n];
    cout<<"Enter the value of array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int ele;
    cout<<"\nEnter the element to be searched:\n";
    cin>>ele;
    int start=0;
    int last=n-1;
    int mid;
    while(start<=last)
    {
        mid=(start+last)/2;
        if(ar[mid]==ele)
        {
            cout<<"Element found at "<<mid;
            break;
        }
        else if(ar[mid]>ele && ele>ar[start])
        {
            last=mid-1;
        }
        else if(ar[mid]>ele && ele<ar[start])
        {
            start=mid+1;
        }
        else if(ar[mid]<ele && ele>ar[last])
        {
            last=mid-1;
        }
        else if(ar[mid]<ele && ele<ar[last])
        {
            start=mid+1;
        }
    }
}
