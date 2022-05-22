// Chef is playing Need For Speed. Currently, his car is running on a straight road with a velocity U metres per second and approaching a 90∘ turn which is S metres away from him. To successfully cross the turn, velocity of the car when entering the turn must not exceed V metres per second. The brakes of Chef's car allow him to slow down with a deceleration (negative acceleration) not exceeding A metres per squared second. Tell him whether he can cross the turn successfully. The velocity v when entering the turn can be determined from Newton's 2nd law to be v2=U2+2⋅a⋅S if the car is moving with a uniform acceleration a.



#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--){
	    int U,V,A,S;
	    cin>>U>>V>>A>>S;

	    if(V*V>=U*U-(2*A*S))
	    {
	        cout<<"YES"<<endl;
	    }
	    
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
