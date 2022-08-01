/* Maximum Production
Problem Code: EITA
Contest Code: JULY21 */


#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int d,x,y,z;
        cin>>d>>x>>y>>z;
        
        int work1=(7*x);
        
        int work2=(d*y)+(7-d)*z;
        
        cout<<max(work1,work2)<<'\n';
        
    }
	return 0;
}
