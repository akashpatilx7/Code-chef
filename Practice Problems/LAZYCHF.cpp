/* Lazy Chef
Problem Code: LAZYCHF
Contest Code: START4 */

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int x,m,d;
        cin>>x>>m>>d;
        
        cout<<min((x*m),(x+d))<<'\n';
    }
	return 0;
}
