#include <iostream>
using namespace std;

int main() {

    float weight, height, bmi;

    cout << "========== BMI CALCULATOR ==========\n";
    cout << "Enter your weight (in kilograms): ";
    cin >> weight;

    cout << "Enter your height (in meters): ";
    cin >> height;

    bmi = weight / (height * height);

    cout << "\nYour BMI is: " << bmi << endl;

    if (bmi < 18.5) {
        cout << "Category: Underweight" << endl;
    }
    else if (bmi >= 18.5 && bmi < 25) {
        cout << "Category: Normal Weight" << endl;
    }
    else if (bmi >= 25 && bmi < 30) {
        cout << "Category: Overweight" << endl;
    }
    else {
        cout << "Category: Obese" << endl;
    }

    cout << "\nThank you for using the BMI Calculator!" << endl;

    return 0;
}
