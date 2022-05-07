 /* Write a program that takes in a letterclass ID of a ship and display the equivalent string class description of the given ID. Use the table below.

Class ID	Ship Class
B or b	BattleShip
C or c	Cruiser
D or d	Destroyer
F or f	Frigate */


#include <iostream>
using namespace std;

int main(){
	int T;
	cin>>T;
	
	while (T--){
	    char ClassID;
	    cin>>ClassID;
	    
        
	    if(ClassID=='B' || ClassID=='b')
	        cout<<"BattleShip"<<endl;
	   
	    else if(ClassID=='C' || ClassID=='c')
	        cout<<"Cruiser"<<endl;
	    
	    else if(ClassID=='D' || ClassID=='d')
	        cout<<"Destroyer"<<endl;
	    
	    else if(ClassID=='F' || ClassID=='f')
	        cout<<"Frigate"<<endl;
	}
	
	return 0;
}
