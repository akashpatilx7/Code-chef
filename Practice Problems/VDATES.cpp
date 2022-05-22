/* Chef has taken his first dose of vaccine D days ago. He may take the second dose no less than L days and no more than R days since his first dose.

Determine if Chef is too early, too late, or in the correct range for taking his second dose.

Input Format
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, three integers D,L,R. */


#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--){
	    int D,L,R;
	    cin>>D>>L>>R;
	    
	    if(L<=D & D<=R){
	        cout<<"Take second dose now"<<'\n';
	    }
	    
	    else if(D<L & L<R){
	        cout<<"Too Early"<<'\n';
	    }
	    
	    else if(L<D & R<D){
	        cout<<"Too Late"<<'\n';
	    }
	}
	return 0;
}
