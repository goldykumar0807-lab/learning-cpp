#include <iostream>
using namespace std;

int main() {
    int age, weight;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter weight (kg): ";
    cin >> weight;

    if (age >= 18 && age <= 60 && weight >= 50)
        cout << "Eligible to donate blood.";
    else
        cout << "Not eligible to donate blood.";

    return 0;
}