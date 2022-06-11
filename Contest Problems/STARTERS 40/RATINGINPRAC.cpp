/* Difficulty Rating Order
Problem Code: RATINGINPRAC
Contest Code: START40 */

#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    int A[N];
	    for(int i=0;i<N;i++){
	        cin>>A[i];
	    }
	    int count=0;
	    for(int i=0;i<N;i++){
	        if(A[i]<A[i+1]){
	            count++;
	        }
	        if(A[i]==A[i+1]){
	            count++;
	        }
	    }
	        
	        if(N==count){
	            cout<<"YES"<<endl;
	        }
	        else{
	            cout<<"NO"<<endl;
	        }
	}
	return 0;
}
