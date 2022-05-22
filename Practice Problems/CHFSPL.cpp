/* Chef has three spells. Their powers are A, B, and C respectively. Initially, Chef has 0 hit points, and if he uses a spell with power P, then his number of hit points increases by P. 
Before going to sleep, Chef wants to use exactly two spells out of these three. Find the maximum number of hit points Chef can have after using the spells.Chef has three spells. Their powers are A, B, and C respectively. Initially, Chef has 0 hit points, and if he uses a spell with power P, then his number of hit points increases by P. 
Before going to sleep, Chef wants to use exactly two spells out of these three. Find the maximum number of hit points Chef can have after using the spells. */



#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--){
	    int A,B,C;
	    cin>>A>>B>>C;
	    
	    cout<<A+B+C-min(A,min(B,C))<<endl;
	}
	return 0;
}
