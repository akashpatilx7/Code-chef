/* No play and eating all day makes your belly fat. This happened to Chef during the lockdown. His weight before the lockdown was w1 kg (measured on the most accurate hospital machine) and after M months of lockdown, when he measured his weight at home (on a regular scale, which can be inaccurate), he got the result that his weight was w2 kg (w2>w1). 
Scientific research in all growing kids shows that their weights increase by a value between x1 and x2 kg (inclusive) per month, but not necessarily the same value each month. Chef assumes that he is a growing kid. Tell him whether his home scale could be giving correct results. */



#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--){
	    int w1,w2,x1,x2,M;
	    cin>>w1>>w2>>x1>>x2>>M;
	    
	    int corrscale=0;
	    int minPossInc=M*x1;
	    int maxPossInc=M*x2;
	    int incWeight=w2-w1;
	    
	    if(incWeight<minPossInc)
	    {
	        cout<<corrscale<<endl;
	    }
	    else if(incWeight>maxPossInc){
	        cout<<corrscale<<endl;
	    }
	    
	    else if(incWeight>=minPossInc)
	    {
	        corrscale=1;
	        cout<<corrscale<<endl;
	    }
	}
	return 0;
}
