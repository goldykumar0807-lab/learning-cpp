#include<iostream>
using namespace std;
int main() {
    int n10,n20,n50,n100,n500,amount;
    cout<<"enter amount : ";
    cin>>amount;
    n10=n20=n50=n100=n500=0;
    switch(amount>=500) {
        case 1 :
        n500 = amount/500;
        amount-= (n500*500);
        break;
    }
    switch(amount>=100) {
        case 1 :
        n100 = amount/100;
        amount-=(n100*100);
        break;
    }
    switch(amount>=50) {
        case 1 :
        n50 = amount/50;
        amount-=(n50*50);
        break;
    }
    switch(amount>=20) {
        case 1 :
        n20 = amount/20;
        amount-=(n20*20);
        break;
    }
    switch(amount>=10) {
        case 1 :
        n10 = amount/10;
        amount-=(n10*10);
        break;
    }
    cout<<"minimum number of notes required : "<<n10+n20+n50+n100+n500;
    return 0;

}
