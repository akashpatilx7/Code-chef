/* Which Division
Problem Code: WHICHDIV
Contest Code: COOK132 */

#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int R;
        cin>>R;
        
        if(R>=2000){
            cout<<1<<'\n';
        }
        
        else if(1600<=R & R<2000){
            cout<<2<<'\n';
        }
        
        else{
            cout<<3<<'\n';
        }
    }
	return 0;
}
