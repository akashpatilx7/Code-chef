/* Chef-jumping
Problem Code: OJUMPS
Contest Code: MAY14 */

#include <iostream>
using namespace std;

int main() {
    /*int T;
    cin>>T;
    
    while(T--){
    }*/
    
    int a;
    cin>>a;
    int X=1;
    
    if(a==0 | a==1 | a%3==0){
        cout<<"yes"<<'\n';
    }
    
    else{
        for(X=1;X<a+1;X++){
            if(a==(1+6*X)){
                cout<<"yes"<<'\n';
                break;
            }
            
            else{
                cout<<"no"<<'\n';
                break;
            }
        }
    }
    
	return 0;
}
