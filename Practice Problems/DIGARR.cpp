/* Rearranging digits to get a multiple of 5
Problem Code: DIGARR
Contest Code: COOK140
Difficulty Rating:949 */


#include<bits/stdc++.h>
#define ll long long
#define llmax LLONG_MAX
#define llmin LLONG_MIN
#define imax INT_MAX
#define imin INT_MIN
using namespace std;

void solution(){
    int D;
    cin>>D;
    int i;
    
    string S;
    cin>>S;
    string divOrNot="NO";
    
    for(i=0;i<D;i++){
        if(S[i]=='0' | S[i]=='5'){
            divOrNot="YES";
        }
    }
    cout<<divOrNot<<'\n';
}
    
int main() {
    int T;
    cin>>T;
    
    while(T--){
        solution();
    }
	return 0;
}
