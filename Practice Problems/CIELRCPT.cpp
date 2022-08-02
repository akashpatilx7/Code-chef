/* Ciel and Receipt
Problem Code: CIELRCPT
Contest Code: COOK24 */

#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int P;
        cin>>P;
        
        int minimum_menus=0;
        int menu[12]={2048,1024,512,256,128,64,32,16,8,4,2,1};
        
        for(int i=0;i<12;i++){
            int X=P/menu[i];
            P-=X*menu[i];
            minimum_menus+=X;
        }
        
        cout<<minimum_menus<<'\n';
    }
	return 0;
}
