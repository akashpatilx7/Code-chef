/* Body Mass Index
Problem Code: BMI
Contest Code: CCRC2021 */

#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int M,H;
        cin>>M>>H;
        
        int BMI=M/(H*H);
        
        if(BMI<=18){
            cout<<1<<'\n';
        }
        
        else if(19<=BMI & BMI<=24){
            cout<<2<<'\n';
        }
        
        else if(25<=BMI & BMI<=29){
            cout<<3<<'\n';
        }
        
        else{
            cout<<4<<'\n';
        }
    }
	return 0;
}
