/* Two vs Ten
Problem Code: TWOVSTEN
Contest Code: LTIME59 */

#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int X;
        cin>>X;
        
        if(X%10==0){
            cout<<0<<'\n';
        }
        
        else if(X%5==0){
            cout<<1<<'\n';
        }
        
        else{
            cout<<-1<<'\n';
        }
    }
	return 0;
}
