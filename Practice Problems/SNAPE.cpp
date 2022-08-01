/* Snape and Ladder
Problem Code: SNAPE
Contest Code: COOK45 */


#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        float B,LS;
        cin>>B>>LS;
        
        float min_RS=sqrt((LS*LS)-(B*B));
        float max_RS=sqrt((LS*LS)+(B*B));
        
        cout<<min_RS<<" "<<max_RS<<'\n';
    }
	return 0;
}
