/* World Chess Championship
Problem Code: WCC
Contest Code: FEB222 */

#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int X;
        cin>>X;
        
        int totalPrizePool=100*X;
        int i;
        
        string S;
        cin>>S;
        
        int scoreCarlson=0;
        int scoreChef=0;
        
        for(i=0;i<14;i++){
            if(S[i]=='C'){
                scoreCarlson++;
            }
        
            else if(S[i]=='N'){
                scoreChef++;
            }
        
            else{
                scoreCarlson++;
                scoreChef++;
            }
        }
        
        if(scoreCarlson>scoreChef){
            cout<<60*X<<'\n';
        }
        
        else if(scoreCarlson<scoreChef){
            cout<<40*X<<'\n';
        }
        
        else{
            cout<<55*X<<'\n';
        }
    }
	return 0;
}
