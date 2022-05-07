//  Pooja would like to withdraw X $US from an ATM. The cash machine will only accept the transaction if X is a multiple of 5, and Pooja's account balance has enough cash to perform the withdrawal transaction (including bank charges). For each successful withdrawal the bank charges 0.50 $US. Calculate Pooja's account balance after an attempted transaction.



#include<iostream>
using namespace std;

int main()
{
    int withdrawl;
    cin>>withdrawl;

    float accbal;
    cin>>accbal;


    if(withdrawl<=accbal && withdrawl%5==0) 
    {
        cout<<(accbal-withdrawl)-0.50<<endl;
    }
    else
    {
        cout<<accbal<<endl;
    }
    return 0;
}
