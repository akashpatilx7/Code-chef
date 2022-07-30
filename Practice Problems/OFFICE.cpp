/* Chef in his Office
Problem Code: OFFICE
Contest Code: JULY222 */

#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--){
	    int X,Y;
	    cin>>X>>Y;
	    
	    int TotalWorkingHours=(4*X)+Y;
	    
	    cout<<TotalWorkingHours<<'\n';
	}
	return 0;
}
