/* The Rating Dilemma
Problem Code: RATING
Contest Code: MARCH222 */


#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int S;
        cin>>S;
        
        if(S==0){
            cout<<-1<<'\n';
        }
        
        else{
            cout<<-(S+1)<<'\n';
        }
    }
	return 0;
}
