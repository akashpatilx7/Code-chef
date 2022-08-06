/* Car Range
Problem Code: CARRANGE
Contest Code: SDELP21
Difficulty Rating:938 */ 

#include<bits/stdc++.h>
using namespace std;

void solution(){
    int P,M,V;
    cin>>P>>M>>V;
    
    cout<<(M-(P-1))*V<<'\n';
}

int main() {
    int T;
    cin>>T;
    
    while(T--){
        solution();
    }
	return 0;
}
