// Question 9 : Complex Math
 
// Problem Statement – The math assignment says you will be given numbers, mostly with imaginary additions, that means complex numbers, and you need to add them and tell the answer in your answer script. You told your friend John that you don’t know the addition of complex numbers, so John will write a program, which you can write in order to get the results of addition.

// John knows Object oriented programming enough to complete the task.

// Input Format:
// Three integers a b and c
// Output format:
// First print the complex number a+bi
// Next line print a + bi + c as i2.
// Next line i2+a+bi

// Sample Input:
// 4 5 2

// Sample Output:
// 4 + 5i
// 6 + 5i
// 10 + 10i


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    string s =  to_string(b);
    string bb = s+"i";
    cout<<a<<" + "<<bb<<endl;
    cout<<(a+c) <<" + "<< bb<<endl;
    int sum = a+c;
    cout<<(sum+a)<<" + "<<(b+b)<<"i"<<endl;
}