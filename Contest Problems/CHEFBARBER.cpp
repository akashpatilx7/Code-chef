// Chef recently realized that he needs a haircut, and went to his favorite hair salon. At the salon, he found N customers waiting for their haircuts. From his past experience, Chef knows that the salon takes M minutes per customer. Only one person can get their haircut at a time.For how many minutes will Chef have to wait before he can get his haircut?



#include <iostream>
using namespace std;

int main() {
int T;
cin>>T;
while(T--)
{
int N,M;
cin>>N>>M;
if(N>0)
{
    cout<<(N*M)<<endl;
}
else
{
    cout<<N;
}
}
	return 0;
}
