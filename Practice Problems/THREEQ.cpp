/* The Old Saint And Three Questions
Problem Code: THREEQ
Contest Code: CDMN2021
Difficulty Rating:954 */

#include<bits/stdc++.h>
#define ll long long
#define llmax LLONG_MAX
#define llmin LLONG_MIN
#define imax INT_MAX
#define imin INT_MIN
using namespace std;

void solution(){
    int rightCount1=0;
    int wrongCount1=0;
    int rightCount2=0;
    int wrongCount2=0;
    
    int A[3];
    for(int i=0;i<3;i++){
        cin>>A[i];
        if(A[i]==0){
            rightCount1++;
        }
        else{
            wrongCount1++;
        }
    }
    
    int B[3];
    for(int j=0;j<3;j++){
        cin>>B[j];
        if(B[j]==0){
            rightCount2++;
        }
        
        else{
            wrongCount2++;
        }
    }
    
    if(rightCount1==rightCount2){
        cout<<"Pass"<<'\n';
    }
    
    else{
        cout<<"Fail"<<'\n';
    }
}

int main() {
    int T;
    cin>>T;
    
    while(T--){
        solution();
    }
	return 0;
}
