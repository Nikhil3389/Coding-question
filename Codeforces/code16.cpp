// Question 4 : Network Stream


// Problem Statement –

//  A stream of n data packets arrives at a server. This server can only process packets that are exactly 2^n units long for some non-negative integer value of n (0<=n).

// All packets are repackaged in order to the 1 largest possible value of 2^n units. The remaining portion of the packet is added to the next arriving packet before it is repackaged. Find the size of the largest repackaged packet in the given stream.

// Example :

// arriving Packets = [12, 25, 10, 7, 8]
// The first packet has 12 units. The maximum value of 2^n that can be made has 2^n = 2^3 = 8 units because the next size up is 2^n = 2^4 = 16 (16 is greater than 12).
// 12 – 8 = 4 units are added to the next packet. There are 4 + 25 = 29 units to repackage, 2^n = 2^4 = 16 is the new size leaving 9 units (29-16 = 9)
// Next packet is 9 + 10 = 29 unists & the maximum units(in 2^n) is 16 leaving 3 units.
// 3 + 7 = 10 , the max units is 8 Leaving 2 units, and so on.
// The maximum repackaged size is 16 units.
// Returns:

// Long : the size of the largest packet that is streamed
// Constraints :

// 1<=n<=10^5
// 1<=arriving Packets[i] size<=10^9
// Sample case :

// Sample input :
// 5 → number of packets=5
// 12 → size of packets=[13,25,12,2,8]
// 25
// 10
// 2
// 8
// Sample output :
// 16


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i =0 ;i<n;i++)
    {
        cin>>arr[i];
    }
    int temp = 1;
    int ans  = INT_MIN;
    for(int i =0;i<n-1;i++)
    {
         temp =1;
        while(2*temp <= arr[i])
        {
            temp = temp*2;
        }
        ans = max(ans,temp);
        arr[i+1] += arr[i]-temp;
    }
    temp =1;
    while(2*temp>= arr[n-1])
    {
        temp = temp*2;
        ans = max(ans,temp);

    }
    cout<<ans;
    return 0;

}