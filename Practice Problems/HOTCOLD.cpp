/* Is it hot or cold
Problem Code: HOTCOLD
Contest Code: START49 */


#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--){
	    int C;
	    cin>>C;
	    
	    if(C>20){
	        cout<<"HOT"<<"\n";
	    }
	    
	    else{
	        cout<<"COLD"<<"\n";
	    }
	}
	return 0;
}
