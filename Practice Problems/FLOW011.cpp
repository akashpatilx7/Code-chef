/* Gross Salary
Problem Code: FLOW011
Difficulty Rating:823 */


#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        float salary;
        cin>>salary;
        float HRA=0;
        float DA=0;
        
        if(salary<1500){
            HRA=salary/10;
            DA=(salary*9)/10;
        }
        
        else{
            HRA=500;
            DA=(salary*98)/100;
        }
        
        float gross_Salary=salary+HRA+DA;
        cout<<fixed<<setprecision(2)<<'\n';
        cout<<gross_Salary<<'\n';
    }
	return 0;
}
