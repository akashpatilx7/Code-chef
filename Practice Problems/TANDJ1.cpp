/* There is a grid of size 105×105, covered completely in railway tracks. Tom is riding in a train, currently in cell (a,b), and Jerry is tied up in a different cell (c,d), unable to move. The train has no breaks. It shall move exactly K steps, and then its fuel will run out and it shall stop. In one step, the train must move to one of its neighboring cells, sharing a side. Tom can’t move without the train, as the grid is covered in tracks. Can Tom reach Jerry’s cell after exactly K steps?

Note: Tom can go back to the same cell multiple times. */ 



#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--){
	    int a,b,c,d,K;
	    cin>>a>>b>>c>>d>>K;
	    
	    int dist;
	    
	    dist=abs(c-a)+abs(d-b);
	    if(K>=dist && K%2==dist%2){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
