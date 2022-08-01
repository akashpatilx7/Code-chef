/* Good Weather
Problem Code: GOODWEAT
Contest Code: START12 */

#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    int sunny=0;
    int rainy=0;
    int i;
    
    while(T--){
        int A[7];
        for(i=0;i<7;i++){
            cin>>A[i];
            if(A[i]==1){
                sunny++;
            }
        
            else{
                rainy++;
            }
        }
        
        if(sunny>rainy){
            cout<<"YES"<<'\n';
        }
        
        else{
            cout<<"NO"<<'\n';
        }
        
        sunny=0;
        rainy=0;
    }
	return 0;
}
