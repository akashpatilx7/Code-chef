// Write a program to check whether a triangle is valid or not, when the three angles of the triangle are the inputs. A triangle is valid if the sum of all the three angles is equal to 180 degrees.



#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int A,B,C;
        cin>>A>>B>>C;
        
        if(A+B+C==180){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	
	return 0;
}
