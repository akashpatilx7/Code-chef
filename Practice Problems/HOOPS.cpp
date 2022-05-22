// You and your friend are playing a game with hoops. There are N hoops (where N is odd) in a row. You jump into hoop 1, and your friend jumps into hoop N. Then you jump into hoop 2, and after that, your friend jumps into hoop N−1, and so on. The process ends when someone cannot make the next jump because the hoop is occupied by the other person. Find the last hoop that will be jumped into.



#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--){
	    int N;
	    cin>>N;
	    
	    int middleElement;
	    int start=1;
	    int end=N;
	    
	    for(int i=0;i<N;i++){
	        middleElement=(start+end)/2;
	    }
	    cout<<middleElement<<endl;
	}
	return 0;
}
