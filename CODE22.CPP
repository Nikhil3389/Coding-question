// Question 12 : Vampire Battle
// Problem Statement – Stephan is a vampire. And he is fighting with his brother Damon. Vampires get energy from human bloods, so they need to feed on human blood, killing the human beings. Stephan is also less inhuman, so he will like to take less life in his hand. Now all the people’s blood has some power, which increases the powers of the Vampire. Stephan just needs to be more powerful than Damon, killing the least human possible. Tell the total power Steohan will have after drinking the bloods before the battle.

// Note that: Damon is a beast, so no human being will be left after Damon drinks everyone’s blood. But Stephan always comes early in the town.
// Input Format:

// First line with the number of people in the town, n.

// Second line with a string with n characters, denoting the one digit power in every blood.

// Output Format:

// Total minimum power Stephan will gather before the battle.

// Constraints:

// n<=10^4
// Sample input :

// 6   

// 093212

// Sample output :

// 9

// Explanation:

// Stephan riches the town, drinks the blood with power 9. Now Damon cannot reach 9 by drinking all the other bloods.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int sum=0,sum1 =0;
    sort(str.begin(),str.end(),greater<char>());
    for(auto i: str)
    {
        sum +=(i-'0');
    }
    for(auto i: str)
    {
        if(sum1>sum) 
          break;
        sum1+=(i-'0');
        // cout<<sum1;
        sum -=(i-'0');
    }
    cout<<sum1;
}