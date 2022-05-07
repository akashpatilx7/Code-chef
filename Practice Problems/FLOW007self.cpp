// Given an Integer N, write a program to reverse it.



#include <iostream>
using namespace std;

int main() {
	int T;
    cin>>T;

    while(T--)
    {
        int N;
        cin>>N;
        int ans=0;
        while (N>0)
        {
            int r=N%10;
            N/=10;
            ans=ans*10+r;
        }
        cout<<ans<<endl;
    }
	return 0;
}

