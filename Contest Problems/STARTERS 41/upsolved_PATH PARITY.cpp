/* You are given an integer N. Let A be an N×N grid such that A_{i, j} = i + N(j-1)
A i,j =i+N⋅(j−1) for 1≤i,j≤N. For example, if N=4 the grid looks like:

You start at the top left corner of the grid, i.e, cell (1, 1). You would like to reach the bottom-right corner, cell (N, N). To do so, whenever you are at cell (i, j), you can move to eiter cell (i+1, j)(i+1,j) or cell (i, j+1) provided that the corresponding cell lies within the grid (more informally, you can make one step down or one step right).

The score of a path you take to reach (N, N) is the sum of all the numbers on that path.

You are given an integer K that is either 0 or 1. Is there a path reaching (N, N) such that the parity of its score is K?

Recall that the parity of an integer is the (non-negative) remainder obtained when dividing it by 2. For example, the parity of 246 is 0 and the parity of 11 is 1. In other words, an even number has parity 0 and an odd number has parity 1.

Input Format
The first line contains a single integer T — the number of test cases. Then the test cases follow.
The first and only line of each test case contains two space-separated integers N and K.

Output Format
For each test case, output the answer on a new line — YES if such a path exists, and NO otherwise.
Each character of the output may be printed in either uppercase or lowercase, i.e, the strings YES, yEs, and yes will all be treated as identical.

Constraints
1≤T≤10 5
1≤N≤10 9
K∈{0,1} */ 

#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--){
	    int N,K;
	    cin>>N>>K;
	    
	    if(N%2==0 || (N%2==1 && K==1)){
	        cout<<"Yes"<<endl;
	    }
	    
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}