// If Give an integer N . Write a program to obtain the sum of the first and last digits of this number.
// We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

// What is typedef long long?
// Using the command typedef it is possible to give a shorter name to a datatype. For example, the name long long is long, so we can define a shorter name ll: typedef long long ll; After this, the code.

// The typedef in C/C++ is a keyword used to assign alternative names to the existing datatypes. It is mostly used with user-defined datatypes when the naming of the predefined datatypes becomes slightly complicated to use in programs.

// Why do we use long long?
// long long int data type in C++ is used to store 64-bit integers. It is one of the largest data types to store integer values, unlike unsigned long long int both positive as well as negative.



#include <iostream>
using namespace std;
typedef long long ll;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,last,first;
		cin>>n;
		last=n%10;
		while(n>=10)
		{
			n=n/10;
		}
		first=n;
		cout<<last+first<<"\n";
		
	}
	return 0;
}