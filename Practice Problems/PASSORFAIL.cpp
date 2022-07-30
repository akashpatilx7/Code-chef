/* Pass or Fail
Problem Code:PASSORFAIL
Contest Code: START16 */

#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int N,X,P;
        cin>>N>>X>>P;
        
        if(P<=(3*X-(N-X))){
            cout<<"PASS"<<'\n';
        }
        
        else{
            cout<<"FAIL"<<'\n';
        }
    }
	return 0;
}
