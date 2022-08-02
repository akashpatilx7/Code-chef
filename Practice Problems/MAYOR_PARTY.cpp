/* Peaceful Party
Problem Code: MAYOR_PARTY
Contest Code: COOK138 */

#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int Pa,Pb,Pc;
        cin>>Pa>>Pb>>Pc;
        
        if(Pa+Pc>=Pb){
            cout<<Pa+Pc<<'\n';
        }
        
        else{
            cout<<Pb<<'\n';
        }
    }
	return 0;
}
