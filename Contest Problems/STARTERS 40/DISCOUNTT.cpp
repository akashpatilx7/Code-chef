/* Take discount or Not
Problem Code: DISCOUNTT
Contest Code: START40 */

#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int N , X , Y;
	    cin>>N>>X>>Y;
	    int A[N];
	    int tSum1=0,tSum2=0;
	    for(int i=0 ; i<N ; i++){
	        cin>>A[i];
	        tSum1+=A[i];
	        
	        if(A[i]-Y<=0){
	            tSum2+=0;
	        }
	        else{
	            tSum2=tSum2+A[i]-Y;
	        }
	    }
	    tSum2+=X;
	    
	    if(tSum1>tSum2){
	        cout<<"COUPON\n";
	    }
	    else{
	        cout<<"NO COUPON\n";
	    }
	}
	return 0;
}
