// You are given two integers N and K. You may perform the following operation any number of times (including zero): change N to N−K, i.e. subtract K from N. // Find the smallest non-negative integer value of N you can obtain this way.



#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--){
	    long long int N,K;
	    cin>>N>>K;
	    
	    if(K==0){
	        cout<<N<<endl;
	    }
	    else
	    {
	        cout<<N%K<<endl;
	    }
	}
	return 0;
}
