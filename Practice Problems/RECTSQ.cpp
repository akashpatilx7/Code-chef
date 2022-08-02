/* Farmer And His Plot
Problem Code: RECTSQ
Difficulty Rating:936 */


#include <iostream>
#include<math.h>
using namespace std;

int gcd(int N,int M){
    if(N<M){
        return gcd(M,N);
    }
    
    else if(M==0){
        return N;
    }
    
    else{
        return gcd(M,N%M);
    }
}
int main() {
    int T;
    cin>>T;
    
    while(T--){
        int N,M;
        cin>>N>>M;
        
        gcd(N,M);
        
        int minSquares=(N/gcd(N,M)*(M/gcd(N,M)));
        
        cout<<minSquares<<'\n';
    }
	return 0;
}
