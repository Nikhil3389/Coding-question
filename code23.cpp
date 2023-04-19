









// Problem Statement – Rahul copies in the exam from his adjacent students. But he doesn’t want to be caught, so he changes words keeping the letter constant. That means he interchanges the positions of letters in words. You are the examiner and you have to find if he has copied a certain word from the one adjacent student who is giving the same exam, and give Rahul the markings he deserves.

// Note that: Uppercase and lowercase are the  same.

// Input Format:

// First line with the adjacent student’s word
// Second line with Rahul’s word
// Output Format:

// 0 if not copied
// 1 if copied
// Constraints:

// 1<=Length of string<=10^6
// Sample Input:

// CAR

// Acr

// Sample Output:

// 1

#include<bits/stdc++.h>
using namespace std;
int main()
{

     string str;
     string str1;
     cin>>str>>str1;
      transform(str.begin(),str.end(),str.begin(),::tolower);
      transform(str1.begin(),str1.end(),str1.begin(),::tolower);
      sort(str.begin(),str.end());
      sort(str1.begin(),str1.end());
      cout<<(str == str1);
}






















// transform(s1.begin(),s1.end(),s1.begin(),::tolower);