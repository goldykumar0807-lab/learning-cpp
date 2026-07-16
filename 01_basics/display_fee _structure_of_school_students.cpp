// This program displays the school fee structure of a student.
#include <iostream>
using namespace std;

int main() {
    int grade;

    cout << "Enter grade of student (1-12): ";
    cin >> grade;

    switch (grade) {

        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "\n--- Fee Structure ---" << endl;
            cout << "Academic Fee : Rs. 25000" << endl;
            cout << "Sports Fee   : Rs. 2000" << endl;
            cout << "Books Fee    : Rs. 3000" << endl;
            cout << "Transport Fee: Rs. 5000" << endl;
            cout << "Total Fee    : Rs. 35000" << endl;
            break;

        case 6:
        case 7:
        case 8:
            cout << "\n--- Fee Structure ---" << endl;
            cout << "Academic Fee : Rs. 35000" << endl;
            cout << "Sports Fee   : Rs. 3000" << endl;
            cout << "Books Fee    : Rs. 4000" << endl;
            cout << "Transport Fee: Rs. 6000" << endl;
            cout << "Total Fee    : Rs. 48000" << endl;
            break;

        case 9:
        case 10:
            cout << "\n--- Fee Structure ---" << endl;
            cout << "Academic Fee : Rs. 45000" << endl;
            cout << "Sports Fee   : Rs. 4000" << endl;
            cout << "Books Fee    : Rs. 5000" << endl;
            cout << "Transport Fee: Rs. 7000" << endl;
            cout << "Total Fee    : Rs. 61000" << endl;
            break;

        case 11:
        case 12:
            cout << "\n--- Fee Structure ---" << endl;
            cout << "Academic Fee : Rs. 55000" << endl;
            cout << "Sports Fee   : Rs. 5000" << endl;
            cout << "Books Fee    : Rs. 6000" << endl;
            cout << "Transport Fee: Rs. 8000" << endl;
            cout << "Total Fee    : Rs. 74000" << endl;
            break;

        default:
            cout << "Invalid grade! Please enter a grade between 1 and 12.";
    }

    return 0;
}
