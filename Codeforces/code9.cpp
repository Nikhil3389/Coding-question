// A-  dubstep
// Examples
// input
// WUBWUBABCWUB
// output
// ABC 
// input
// WUBWEWUBAREWUBWUBTHEWUBCHAMPIONSWUBMYWUBFRIENDWUB
// output
// WE ARE THE CHAMPIONS MY FRIEND
 #include<bits/stdc++.h>
 using namespace std;




 
 int main()
 {
    string  str;
    cin>> str;
    bool isTrue  = true;
    for(int i =0;i<str.size();i++)
    {
        if(str[i] == 'W' &&str[i+1] == 'U' && str[i+2] == 'B')
        {
            i+=2;
            if(!isTrue)
            {
                cout<<" ";
            }

        }
        else{
            isTrue = false;
            cout<<str[i];
        }
    }
    return 0;
 }