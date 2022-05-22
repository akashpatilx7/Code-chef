// Chef has been searching for a good motivational movie that he can watch during his exam time. His hard disk has X GB of space remaining. His friend has N movies represented with (Si,Ri) representing (space required, IMDB rating). Help Chef choose the single best movie (highest IMDB rating) that can fit in his hard disk.



#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        long long N,X;
        cin>>N>>X;
        int ans=0;
        
        
        for(int i=0;i<N;i++){
            int S,I;
            cin>>S>>I;
            
            if(S<=X && ans<I)   {
                ans=I;
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}
