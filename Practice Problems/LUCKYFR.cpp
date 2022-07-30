/* Lucky Four
Problem Code: LUCKYFR
Difficulty Rating: 998 */


#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int N;
        cin>>N;
        int count=0;
        
        while(N>0){
            int lastDigit=N%10;
            if(lastDigit==4){
                count++;
            }
            N/=10;
        }
        
        cout<<count<<'\n';
    }
	return 0;
}
