/* Factorial
Problem Code: FCTRL
Difficulty Rating: 878 */

/* What is meant by trailing zeros?
   In mathematics, trailing zeros are a sequence of 0 in the decimal representation (or more generally, in any positional representation) of a number, after which no other digits follow. */

#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int N;
        cin>>N;
        int zeroes=0;
        int C=5;
        
        while ((N/C)>0){
            zeroes=zeroes+(N/C);
            C=C*5;
        }
        
        cout<<zeroes<<'\n';
    }
	return 0;
}
