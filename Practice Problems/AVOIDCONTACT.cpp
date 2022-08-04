/* Avoid Contact
Problem Code: AVOIDCONTACT
Contest Code: START24 */


#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int X,Y;
        cin>>X>>Y;
        
        if(X>Y){
            cout<<(2*Y)+(X-Y)<<'\n';
        }
        
        else{
            cout<<(2*Y)-1<<'\n';
        }
    }
	return 0;
}
