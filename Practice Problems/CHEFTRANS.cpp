/* Chef and Vacation Transportation
Problem Code: CHEFTRANS
Contest Code: LTIME103 */ 

#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int X,Y,Z;
        cin>>X>>Y>>Z;
        
        if(X+Y<Z){
            cout<<"PLANEBUS"<<'\n';
        }
        
        else if(X+Y>Z){
            cout<<"TRAIN"<<'\n';
        }
        
        else{
            cout<<"EQUAL"<<'\n';
        }
    }
	return 0;
}
