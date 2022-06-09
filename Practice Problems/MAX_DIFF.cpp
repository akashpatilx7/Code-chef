/* Chef prepared two dishes yesterday. Chef had assigned the tastiness T1 and T2 to the first and to the second dish respectively. The tastiness of the dishes can be any integer between 0 and N (both inclusive). Unfortunately, Chef has forgotten the values of T1 and T2 that he had assigned to the dishes. However, Chef wonders, what can be the maximum possible absolute difference between the tastiness of the two dishes. Can you help the Chef in finding the maximum absolute difference? 
It is guaranteed that at least one pair {T1,T2} exist such that T1+T2=S,0≤T1,T2≤N. */


#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--){
	    int N,S;
	    cin>>N>>S;
	    
	    if (S<=N)
	    {
	        // take {0,S}
	        cout<<S<<'\n';
	    }
	    else
	    {
	        // take n=7, s=10
	        // {S-N,N}
	        // TO GET THE MAXIMUM DIFFERENCE OF TWO NUMBERS IN AN ORDERED PAIR HAVING FIXED SUM, TAKE THE SECOND NUMBER AS THE NUMBER WHICH IS SUBTRACTED FROM THE FIRST. 
	        cout<<2*N-S<<'\n';
	    }
	}
	return 0;
}