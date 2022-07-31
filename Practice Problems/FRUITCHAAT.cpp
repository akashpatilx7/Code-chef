/* Chef and His Fruit Stand
Problem Code: FRUITCHAAT
Contest Code: START25 */

#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int X,Y;
        cin>>X>>Y;
        
        if((X/2)<=Y){
            cout<<(X/2)<<'\n';
        }
        
        else{
            cout<<Y<<'\n';
        }
    }
	return 0;
}
