/* Chef is a software developer, so he has to switch between different languages sometimes. Each programming language has some features, which are represented by integers here.
Currently, Chef has to use a language with two given features A and B. He has two options --- switching to a language with two features A1 and B1, or to a language with two features A2 and B2. All four features of these two languages are pairwise distinct. 
Tell Chef whether he can use the first language, the second language or neither of these languages (if no single language has all the required features). */ 



/* pairwise distinct means that,each element can’t be repeat more than once.

Ex:
1 2 200 345 12 45 —> In this one,all are pairwise distinct.

1 2 200 200 12 12 —> This is not pairwise distinct since, 200 12 are occur 2 times each. */ 

/* Value & Value

Bitwise AND

Value ^ Value

Bitwise XOR (exclusive OR)

Value | Value

Bitwise OR

Value && Value

Logical AND

Value || Value

Logical OR */


#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--){
	    int A,B,A1,B1,A2,B2;
	    cin>>A>>B>>A1>>B1>>A2>>B2;
	    int ans=0;
	    
	    if((A==A1 && B==B1) || (A==B1 && B==A1)){
	        ans=1;
	    }
	    if((A==A2 && B==B2) || (A==B2 && B==A2)){
	        ans=2;
	    }
	 	cout<<ans<<endl;
	}
	return 0;
}
