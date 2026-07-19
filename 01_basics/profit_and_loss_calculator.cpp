#include<iostream>
using namespace std;
int main() {
    int sp, cp, profit, loss;;
    cout<<"enter sp and cp in rupees : ";
    cin>>sp>>cp;
    if(sp>cp){
        cout<<"profit "<<sp-cp<<" rupees"<<endl;
    }else if(sp<cp){
        cout<<"loss of "<<cp-sp<<"rupees"<<endl;
    }else{
        cout<<"no profit no loss"<<endl;
    }
    return 0;
}
