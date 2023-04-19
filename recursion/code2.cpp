#include<bits/stdc++.h>
using namespace std;
bool solve(int i , string str,int n)
{
    if(i>=n/2)
    {
        return true;
    }
    if(str[i] != str[n-i-1])
    {
        return false;
    }
    solve(i+1,str,n);
}
int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    if(solve(0,str,n))
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}