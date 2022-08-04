/* Shoe Fit
Problem Code: SHOEFIT
Contest Code: COOK131 */ 

#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int A,B,C;
        cin>>A>>B>>C;
        
        if(A==0 & B==1 | A==1 & B==0){
            cout<<1<<'\n';
        }
        
        else if(B==0 & C==1 | B==1 & C==0){
            cout<<1<<'\n';
        }
        
        else if(A==0 & C==1 | A==1 & C==0){
            cout<<1<<'\n';
        }
        
        else{
            cout<<0<<'\n';
        }
    }
	return 0;
}
