/* Maximise the Tastiness
Problem Code: MAXTASTE
Contest Code: START49 */


#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    
	    int Tastiness=max(a,b)+max(c,d);
	    cout<<Tastiness<<"\n";
	}
	return 0;
}
