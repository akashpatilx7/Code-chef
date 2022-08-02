/* No Time to Wait
Problem Code: NOTIME
Contest Code: MARCH21 */


#include <iostream>
using namespace std;

int main() {
    /* int T;
    cin>>T;
    
    while(T--){
    }*/
    
    int N,H,x;
    cin>>N>>H>>x;
    
    int timeZones[N];
    string S;
    
    for(int i=0;i<N;i++){
        cin>>timeZones[i];
    }
    
    for(int i=0;i<N;i++){
        if((timeZones[i]+x)>=H){
            S="YES";
            break;
        }
        
        else{
            S="NO";
        }
    }
    
    cout<<S<<'\n';
	return 0;
}
