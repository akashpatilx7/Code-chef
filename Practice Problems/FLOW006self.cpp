// You're given an integer N. Write a program to calculate the sum of all the digits of N.



#include <iostream>
using namespace std;

int main() {
	int T;
    cin>>T;


    while(T--){
        int N;
        cin>>N;

        int sum=0;
        while(N!=0){
        int R=N%10;
        sum=sum+R;
        N=N/10;
        
        }
        cout<<sum<<endl;
    }

	return 0;
}

