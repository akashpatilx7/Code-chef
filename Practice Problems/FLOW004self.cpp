// If Give an integer N . Write a program to obtain the sum of the first and last digits of this number.

// What is typedef long long?
// Using the command typedef it is possible to give a shorter name to a datatype. For example, the name long long is long, so we can define a shorter name ll: typedef long long ll; After this, the code.

// The typedef in C/C++ is a keyword used to assign alternative names to the existing datatypes. It is mostly used with user-defined datatypes when the naming of the predefined datatypes becomes slightly complicated to use in programs.

// Why do we use long long?
// long long int data type in C++ is used to store 64-bit integers. It is one of the largest data types to store integer values, unlike unsigned long long int both positive as well as negative.


#include<iostream>
using namespace std;

int main()
{
// Here, the datatype of T and N can also be taken as long long (ll)
    int T;
    cin>>T;

    while(T--)
    {
        int N;
        cin>>N;

        int last,first;

        last=N%10;
        while(N>=10)
        {
            N=N/10;
        }
        first=N;

    cout<<first+last<<endl;
    }

    return 0;
}
