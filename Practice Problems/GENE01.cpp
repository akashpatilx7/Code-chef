/* Genes
Problem Code: GENE01
Contest Code: START20 */


#include <iostream>
using namespace std;

int main() {
    /* int T;
    cin>>T;
    
    while(T--){
    } */ 
    
    char a,b;
    cin>>a>>b;
    
    if(a=='R' | b=='R'){
        cout<<'R'<<'\n';
    }
    
    else if(a=='B' | b=='B'){
        cout<<'B'<<'\n';
    }
    
    else{
        cout<<'G'<<'\n';
    }
	return 0;
}
