/* Penalty Shots
Problem Code: PENALTY
Contest Code: START8 */


#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int A[10];
        for(int i=0;i<10;i++){
            cin>>A[i];
        }
        
        int team1=0;
        for(int i=0;i<10;i+=2){
            team1+=A[i];
        }
        
        int team2=0;
        for(int i=1;i<10;i+=2){
            team2+=A[i];
        }
        
        if(team1>team2){
            cout<<1<<'\n';
        }
        
        else if(team1<team2){
            cout<<2<<'\n';
        }
        
        else{
            cout<<0<<'\n';
        }
    }
	return 0;
}
