/* Smallest Numbers of Notes
Problem Code: FLOW005
Difficulty Rating: 839 */


#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int N;
	    cin>>N;
	    int ans=0;
	    int Denom[]={100,50,10,5,2,1};
	    
	    for(int i=0;i<6;i++){
	        ans+=N/Denom[i];
	        N-=Denom[i]*(N/Denom[i]);
	    }
	    
	    cout<<ans<<"\n";
	}
	return 0;
}
