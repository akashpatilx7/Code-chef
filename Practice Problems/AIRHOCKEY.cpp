/* Air Hockey
Problem Code: AIRHOCKEY
Contest Code: START44 */


#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int A,B;
        cin>>A>>B;
        
        if(A>=B){
            cout<<7-A<<'\n';
        }
        
        else{
            cout<<7-B<<'\n';
        }
    }
	return 0;
}
