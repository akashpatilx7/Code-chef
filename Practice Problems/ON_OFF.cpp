/* N Buttons 1 Bulb
Problem Code: ON_OFF
Contest Code: START49 */


#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int N;
        cin>>N;
        
        string S;
        cin>>S;
        
        string R;
        cin>>R;
        
        int count=0;
        
        for(int i=0;i<N;i++){
            if(S[i]!=R[i]){
                count++;
            }
        }
        
        if(count%2==0){
            cout<<1<<'\n';
        }
        
        else{
            cout<<0<<'\n';   
        }
    }
	return 0;
}
