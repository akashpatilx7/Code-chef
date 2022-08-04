/* Find the Direction
Problem Code: FACEDIR
Contest Code: START11 */

#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int X;
        cin>>X;
        
        if(X%4==0){
            cout<<"North"<<'\n';
        }
        
        else if(X%4==1){
            cout<<"East"<<'\n';
        }
        
        else if(X%4==2){
            cout<<"South"<<'\n';
        }
        
        else{
            cout<<"West"<<'\n';
        }
    }
	return 0;
}
