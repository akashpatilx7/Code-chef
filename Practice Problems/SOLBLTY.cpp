/* Solubility
Problem Code: SOLBLTY
Contest Code: MAY21 */

#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int X,A,B;
        cin>>X>>A>>B;
        
        int solGmPerMl=A+(100-X)*B;
        int solGmPerL=solGmPerMl*10;
        
        cout<<solGmPerL<<'\n';
    }
	return 0;
}
