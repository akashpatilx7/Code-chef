/* The Preparations
Problem Code: SUPCHEF
Contest Code: START13 */


#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int M,N,K;
        cin>>M>>N>>K;
        
        if(M>(N*K)){
            cout<<"YES"<<'\n';
        }
        
        else{
            cout<<"NO"<<'\n';
        }
    }
	return 0;
}
