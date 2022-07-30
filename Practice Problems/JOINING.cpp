/* Joining Date
Problem Code: JOINING
Contest Code: START43 */

#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int N,K;
        cin>>N>>K;
        
        int total=((N+4)/5);
        int unaffected=((K+4)/5);
        
        cout<<total - unaffected<<'\n';
    }
	return 0;
}
