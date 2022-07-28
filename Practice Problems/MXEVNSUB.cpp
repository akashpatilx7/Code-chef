// You are given an integer N. Consider the sequence containing the integers 1,2,…,N in increasing order (each exactly once). Find the maximum length of its contiguous subsequence with an even sum.



#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--){
	    int N;
	    cin>>N;
	    int sum;
	    
	    sum=N*(N+1)/2;
	    
	    if(sum%2==0){
	        cout<<N<<endl;
	    }
	    else{
	        cout<<N-1<<endl;
	    }
	}
	return 0;
}
