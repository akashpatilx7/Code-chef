/* Chef and Interactive Contests
Problem Code: CHFINTRO
Contest Code: DEC18
Difficulty Rating:951 */  

#include<bits/stdc++.h>
#define ll long long
#define llmax LLONG_MAX
#define llmin LLONG_MIN
#define imax INT_MAX
#define imin INT_MIN
using namespace std;

/*void solution(){
}*/

int main() {
    int N,r;
    cin>>N>>r;
    
    while(N--){
        // solution();
        int R;
        cin>>R;
        
        if(R<r){
            cout<<"Bad boi"<<'\n';
        }
        
        else{
            cout<<"Good boi"<<'\n';
        }
    }
	return 0;
}
