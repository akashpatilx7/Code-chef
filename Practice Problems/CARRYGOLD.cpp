/* Gold Mining
Problem Code: CARRYGOLD
Contest Code: START15 */


#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int N,X,Y;
        cin>>N>>X>>Y;
        
        if(X<=((N+1)*Y)){
            cout<<"YES"<<'\n';
        }
        
        else{
            cout<<"NO"<<'\n';
        }
    }
	return 0;
}
