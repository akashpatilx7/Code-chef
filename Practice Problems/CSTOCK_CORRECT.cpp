 /* Chef wants to buy a stock whose price was S rupees when the market opened. He will buy the stock if and only if its price is in the range [A,B]. The price of the stock has changed by C% by the time he was trying to buy the stock. Will he be able to buy the stock? */


#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
   for(int i=0; i<T; i++){
        float S,A,B,C;
        cin>>S>>A>>B>>C;
        float inc = (S*C)/100;
        float cmp = S+inc ;
        // cout<<cmp<<endl
        if(cmp>=A && cmp<=B){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
