#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string> str(n);
    // cin>>str;
    for(int i =0;i<n;i++)
    {
        cin>>str[i];
    }
    vector<int>mpp;
    int len =0;
    for(int i =0;i<n;i++)
    {
        len = str[i].size();
        if(len%2 ==0)
        {
        	mpp.push_back(0);
        }
        if(len%2==1)
        {
            mpp.push_back(len);
            
        }
    }
    for(auto i:mpp) cout<<i<<" ";
        if(mpp.size() == 0)
        {
            cout<<"BLNT"<<endl;
        }

        else{
            int maxi =  INT_MIN;
            int  j=0;
            
            for(int i =0;i<n;i++)
            {
                if(mpp[i] > maxi)
                {
                	maxi =  mpp[i];
                	j =i;
                }
                

            }
            cout<<maxi;
            cout<<" "<<j;
                // int lower =  lower_bound(mpp.begin(),mpp.end(),maxi) - mpp.begin();
                
                
                // cout<<lower+1;
                cout<<str[j];
            }
        
    }
