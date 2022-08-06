/* Janmansh at Fruit Market
Problem Code: JMARKET
Contest Code: COOK139
Difficulty Rating:947 */


#include<bits/stdc++.h>
#define ll long long
#define llmax LLONG_MAX
#define llmin LLONG_MIN
#define imax INT_MAX
#define imin INT_MIN
using namespace std;

void solution(){
    int X,A,B,C;
    cin>>X>>A>>B>>C;
    int noA=0;
    int noB=0;
    int noC=0;
    
    if(A>=B & B>=C){
        noB=1;
        noC=X-1;
    }
    
    else if(A>=C & C>=B){
        noB=X-1;
        noC=1;
    }
    
    else if(B>=A & A>=C){
        noA=1;
        noC=X-1;
    }
    
    else if(B>=C & C>=A){
        noC=1;
        noA=X-1;
    }
    
    else if(C>=A & A>=B){
        noA=1;
        noB=X-1;
    }
    
    else{
        noB=1;
        noA=X-1;
    }
    
    int minPrice=(noA*A)+(noB*B)+(noC*C);
    cout<<minPrice<<'\n';
}

int main() {
    int T;
    cin>>T;
    
    while(T--){
        solution();
    }
	return 0;
}
