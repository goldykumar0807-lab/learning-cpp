//Q6 — Bank Account
//Now let's test whether you understand that each object maintains its own data.
//Create a class BankAccount with:
//- accountNumber — integer
//- balance — integer
#include<iostream>
using namespace std;
class Bank_account{
    public:
    int account_no;
    int balance;
    void display(){
        cout<<"account no : "<<account_no<<endl;
        cout<<"balance : "<<balance<<endl;
    }
    void change(Bank_account &b){
        b.balance=50000;
    }
};
int main(){
    Bank_account b1;
    b1.account_no=45677389;
    b1.balance=4000;
    cout<<"bank account b1 : "<<endl;
    b1.display();

    Bank_account b2;
    b2.account_no=34876873;
    b2.balance=500;
    cout<<"bank account 2 : "<<endl;
    b2.display();

    b1.change(b1);
    cout<<"bank account b1 : "<<endl;
    b1.display();

    cout<<"bank account 2 : "<<endl;
    b2.display();
}