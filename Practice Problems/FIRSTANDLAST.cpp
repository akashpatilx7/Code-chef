/* First and Last
Problem Code: FIRSTANDLAST
Contest Code: COOK142
Difficulty Rating:932 */

#include<bits/stdc++.h>
using namespace std;

void solution(){
    int N;
    cin>>N;
    
    vector<int> A(N);
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    
    int max_sum=0;
    max_sum=A[0]+A[N-1];
    for(int i=0;i<N-1;i++){
        max_sum=max(max_sum,A[i]+A[i+1]);
    }
    
    cout<<max_sum<<'\n';
}

int main() {
    int T;
    cin>>T;
    
    while(T--){
        solution();
    }
	return 0;
}
