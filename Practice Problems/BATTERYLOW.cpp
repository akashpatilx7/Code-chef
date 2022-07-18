/* Battery Low
Problem Code: BATTERYLOW
Contest Code: LTIME105 */

#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--){
	    int X;
	    cin>>X;
	    
	    if(X<=15){
	        cout<<"YES"<<"\n";
	    }
	    else{
	    cout<<"NO"<<"\n";
	    }
	}
	return 0;
}
