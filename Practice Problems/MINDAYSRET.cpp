/* Back to Campus
Problem Code: MINDAYSRET
Contest Code: START18 */

#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int N,K;
        cin>>N>>K;
        
        if(N%K==0){
            cout<<N/K<<'\n';
        }
        
        else{
            cout<<(N/K)+1<<'\n';
        }
    }
	return 0;
}
