#include<iostream>
using namespace std;
int main()
{
    int n,m,k,s;
    cout<<"Enter the value of N,M,K,S:\n";
    cin>>n>>m>>k>>s;
    char ar[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>ar[i][j];
        }
    }
    // . reduces strength by 2 , * increases strength by 5 and # represents blocking of path.
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(j==0)
            {
                s+=1;
            }
            if(k<=s)
            {
                if(ar[i][j]=='.')
                {
                    s-=2;
                    s-=1;
                }
                else if(ar[i][j]=='*')
                {
                    s+=5;
                    s-=1;
                }
                else if(ar[i][j]=='#')
                {
                    s-=1;
                    break;
                }
            }
            else
            {
                cout<<"No Piyush wont be able to cross Garden";
                return 0;
            }
        }
    }
    cout<<"Piyush Will be able to cross Garden with Strength "<<s;
}
