/* A - Save Water Save Life
Problem Code: SAVWATER
Contest Code: SPYB2021 */

#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int H,x,y,C;
        cin>>H>>x>>y>>C;
        
        int z=floor(y/2);
        
        if((x+z)*H<=C){
            cout<<"YES"<<'\n';
        }
        
        else{
            cout<<"NO"<<'\n';
        }
    }
	return 0;
}
