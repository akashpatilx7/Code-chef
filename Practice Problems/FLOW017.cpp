/* Second Largest
Problem Code: FLOW017 
Difficulty Rating: 730 */


#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int A,B,C;
        cin>>A>>B>>C;
        
        
        
        if(A>C && C>B || B>C && C>A){
            cout<<C<<'\n';
        }
        
        else if(A>B && B>C || C>B && B>A){
            cout<<B<<'\n';
        }
        
        else{
            cout<<A<<'\n';
        }
    }
	return 0;
}
