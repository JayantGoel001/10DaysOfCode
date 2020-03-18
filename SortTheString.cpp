#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
string ExtractString(string str,int key)
{
    char *s=strtok((char*)str.c_str()," ");
    while(key>1)
    {
        s=strtok(NULL," ");
        key--;
    }
    return (string)s;
}
int convertToInt(string s)
{
    int ans=0;
    int p=1;
    for(int i=s.length()-1;i>=0;i--)
    {
        ans+=((s[i]-'0')*p);
        p*=10;
    }
    return ans;
}
bool numericCompare(pair<string,string> s1,pair<string,string> s2)
{
    string key1,key2;
    key1=s1.second;
    key2=s2.second;
    return convertToInt(key1)<convertToInt(key2);
}
bool lexicographicalCompare(pair<string,string> s1,pair<string,string> s2)
{
    string key1,key2;
    key1=s1.second;
    key2=s2.second;
    return key1<key2;
}
int main()
{
    int n;
    cout<<"Enter the value of n :\n";
    cin>>n;
    cin.get();
    string numbers[n];
    cout<<"Enter the value of String array :\n";
    for(int i=0;i<n;i++)
    {
        getline(cin,numbers[i]);
    }
    int key;
    string reversal,ordering;
    cout<<"\n\nEnter the value of key,reversal,ordering :\n";
    cin>>key;
    cin>>reversal;
    cin>>ordering;
    pair<string,string> strPair[n];
    for(int i=0;i<n;i++)
    {
        strPair[i].first=numbers[i];
        strPair[i].second=ExtractString(numbers[i],key);
    }
    if(ordering=="numeric")
    {
        sort(strPair,strPair+n,numericCompare);
    }
    else
    {
        sort(strPair,strPair+n,lexicographicalCompare);
    }
    if(reversal=="true")
    {
        for(int i=0;i<n/2;i++)
        {
            swap(strPair[i],strPair[n-i-1]);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<strPair[i].first<<endl;
    }
}
