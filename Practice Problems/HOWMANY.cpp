/* HOW MANY DIGITS DO I HAVE
Problem Code: HOWMANY 
Difficulty Rating:908 */

#include <iostream>
using namespace std;

int main() {
    /*int T;
    cin>>T;
    
    while(T--){
    }*/
    
    int N;
    cin>>N;

    if(N>=0 & N<10){
        cout<<1<<'\n';
    }
    
    else if(N>=10 & N<100){
        cout<<2<<'\n';
    }
    
    else if(N>=100 & N<1000){
        cout<<3<<'\n';
    }
    
    else{
        cout<<"More than 3 digits"<<'\n';
    }
	return 0;
}
