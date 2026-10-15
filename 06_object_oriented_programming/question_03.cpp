//Create a class Employee with these data members.
#include<iostream>
using namespace std;
class Employee {
    public:
    string name;
    int salary;
    void display(){
        cout<<name<<" "<<salary;
    }
};
int main(){
    Employee e1;
    e1.name="goldy";
    e1.salary=20000;
    e1.display();
}