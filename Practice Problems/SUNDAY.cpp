/* Count the Holidays
Problem Code: SUNDAY
Contest Code: START28 */


#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int N;
        cin>>N;
        int i;
        int holidays=0;
        
        int A[N];
        for(i=0;i<N;i++){
            cin>>A[i];
            if(A[i]%7==0 || A[i]==6 || A[i]==13 || A[i]==20 || A[i]==27){
                continue;
            }
        
            else{
                holidays++;
            }
        }
        
        cout<<8+holidays<<'\n';
    }
	return 0;
}
