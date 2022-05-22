/* Chef prepared a problem. The admin has rated this problem for x points.

A problem is called :

1) Easy if 1≤x<100

2) Medium if 100≤x<200

3) Hard if 200≤x≤300

Find the category to which Chef’s problem belongs.*/



#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--){
	    int x;
	    cin>>x;
	    
	    if(x<100 && x>=1){
	        cout<<"Easy"<<'\n';
	    }
	    
	    else if(x<200 && x>=100){
	        cout<<"Medium"<<'\n';
	    }
	    
	    else if(x<=300 && x>=200){
	        cout<<"Hard"<<'\n';
	    }
	    
	}
	return 0;
}