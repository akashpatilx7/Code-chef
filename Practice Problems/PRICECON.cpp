/* Chef and Price Control
Problem Code: PRICECON
Contest Code: JUNE20
Difficulty Rating:931 */

  
#include<bits/stdc++.h>
using namespace std;

void solution(){
    int N,K;
    cin>>N>>K;
    
    int P[N];
    for(int i=0;i<N;i++){
        cin>>P[i];
    }
    
    int revenue=0;
    int newRevenue=0;
    
    for(int i=0;i<N;i++){
        revenue+=P[i];
        
        if(P[i]<=K){
            newRevenue+=P[i];
        }
        
        else{
            newRevenue+=K;
        }
    }
    cout<<revenue - newRevenue<<'\n';
}

int main() {
    int T;
    cin>>T;
    
    while(T--){
        solution();
    }
	return 0;
}
