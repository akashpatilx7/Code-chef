/* Hardest Problem Bet
Problem Code: HARDBET
Contest Code: START10 */


#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int Sa,Sb,Sc;
        cin>>Sa>>Sb>>Sc;
        
        if(Sc<Sb & Sc<Sa){
            cout<<"Alice"<<'\n';
        }
        
        else if(Sb<Sc & Sb<Sa){
            cout<<"Bob"<<'\n';
        }
        
        else{
            cout<<"Draw"<<'\n';
        }
    }
	return 0;
}
