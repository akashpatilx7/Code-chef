/* Chef has two integers X and Y. Chef wants to perform some operations to make X and Y equal. In one operation, Chef can either:

set X:=X+1
or set Y:=Y+2
Find the minimum number of operations required to make X and Y equal.

Input Format
The first line contains a single integer T — the number of test cases. Then the test cases follow.
The first and only line of each test case contains two space separated integers X and Y.

Output Format
For each test case, print the minimum number of operations required to make X and Y equal.

Constraints
1≤T≤10 4
 
1≤X,Y≤10 9 */



#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--){
	    int X,Y;
	    cin>>X>>Y;
	    
	    int minNoOfOperations=0;
	    
	    if(X<Y){
	        while(X!=Y){
	            X+=1;
	            minNoOfOperations++;
	        }
	    }
	    
	    else if(X>Y){
	        while(X!=Y){
	            Y+=2;
	            minNoOfOperations++;
	            
	            if(Y>X){
	                while(X!=Y){
	                    X+=1;
	                    minNoOfOperations++;
	                }
	            }
	        }
	    }
    
	    cout<<minNoOfOperations<<endl;
	}
	return 0;
}
