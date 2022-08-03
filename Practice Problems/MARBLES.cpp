/* Marbles
Problem Code: MARBLES
Difficulty Rating:925 */


#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        long N,K,ans=1;
        cin>>N>>K;
        for(long i=1;i<K; i++) {
            ans=ans*(N-K+i)/i;
        }
        cout<<ans<<"\n";
    }
	return 0;
}
