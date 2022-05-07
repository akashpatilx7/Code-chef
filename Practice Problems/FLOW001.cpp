// Shivam is the youngest programmer in the world, he is just 12 years old. Shivam is learning programming and today he is writing his first program.The task is very simple: given two integers A and B, write a program to add these two numbers and output it.



// You don't need to add/edit anything to the below solution. 
// Click on the SUBMIT button to solve your first problem on CodeChef.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int t;
   cin>>t;
   int a,b;
   while(t--){
    int sum=0;
    cin>>a>>b;
    sum=a+b;
    cout<<sum<<"\n";
   }
   return 0;
}