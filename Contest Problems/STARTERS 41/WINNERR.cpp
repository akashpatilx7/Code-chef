/* There is a contest containing 2 problems A and B.

2 strong participants P and Q participated in the contest and solved both the problems.

P made AC submissions on problems A and B at time instants P_A and P_B respectively while Q made AC submissions on problems A and B at time instants Q_A and Q_B. It is given that the time penalty is the minimum time instant at which a participant has solved both the problems. Also the participant with the lower time penalty will have a better rank. Determine which participant got the better rank or if there is a TIE.

Input Format
The first line will contain T, number of test cases. Then the test cases follow.
Each test case contains a single line of input, four integers P_A, P_B, Q_A, Q_B.

Output Format
For each test case, output P if P got a better rank, Q if Q got a better rank, TIE otherwise.

Note that output is case-insensitive i.e. P and p both are considered the same.

Constraints
1≤T≤1000
1≤P_A,P_B,Q_A,Q_B≤100

Sample 1:
Input
Output
4
5 10 2 12
10 30 15 15
20 8 4 20
6 6 6 6
P
Q
TIE
TIE

Explanation:
Test Case 1:

Time penalty incurred by participant P = 10.
Time penalty incurred by participant Q = 12.
Since 10<12, P gets a better rank.

Test Case 2:

Time penalty incurred by participant P = 30.
Time penalty incurred by participant Q = 15.
Since 15<30, Q gets a better rank.

Test Case 3:

Time penalty incurred by participant P = 20.
Time penalty incurred by participant Q = 20.
Since 20=20, P and Q gets a same rank (TIE).

Test Case 4:

Time penalty incurred by participant P = 6.
Time penalty incurred by participant Q = 6.
Since 6=6, P and Q gets a same rank (TIE). */



#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int pA,pB,qA,qB;
        cin>>pA>>pB>>qA>>qB;
        
        int timePenalty1,timePenalty2;
        
        if(pA>pB){
            timePenalty1=pA;
        }
        else{
            timePenalty1=pB;
        }
        
        if(qA>qB){
            timePenalty2=qA;
        }
        else{
            timePenalty2=qB;
        }
        
        
        if(timePenalty1==timePenalty2){
            cout<<"TIE"<<endl;
        }
        else if(timePenalty1>timePenalty2){
            cout<<"Q"<<endl;
        }
        else{
            cout<<"P"<<endl;
        }
    }
	return 0;
}
