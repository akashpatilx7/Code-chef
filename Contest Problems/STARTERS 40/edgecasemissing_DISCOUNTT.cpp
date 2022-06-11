/* Take discount or Not
Problem Code: DISCOUNTT
Contest Code: START40 */ 

#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--){
	    int N,X,Y;
	    cin>>N>>X>>Y;
	    int A[N];
	    int sum=0;
	    int newSum=0;
	    
	    for(int i=0;i<N;i++){
	        cin>>A[i];
          sum+=A[i];
	    }
    
	    for(int i=0;i<N;i++){
	        A[i]-=Y;
	        newSum+=A[i];
	    }
	   
	    if((newSum+X)>sum){
	        cout<<"NO COUPON"<<"\n";
	    }
	    else if((newSum+X)==sum){
	        cout<<"NO COUPON"<<"\n";
	    }
	    else{
	        cout<<"COUPON"<<"\n";
	    }
	}
	return 0;
}
