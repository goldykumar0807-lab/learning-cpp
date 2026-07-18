//Electricity bill calculator.
#include <iostream>
using namespace std;

int main() {

    int units;
    float bill;

    cout << "========== ELECTRICITY BILL CALCULATOR ==========\n";
    cout << "Enter electricity units consumed: ";
    cin >> units;

    if (units <= 100) {
        bill = units * 1.50;
    }
    else if (units <= 200) {
        bill = (100 * 1.50) + ((units - 100) * 2.50);
    }
    else if (units <= 300) {
        bill = (100 * 1.50) + (100 * 2.50) + ((units - 200) * 4.00);
    }
    else {
        bill = (100 * 1.50) + (100 * 2.50) + (100 * 4.00) + ((units - 300) * 6.00);
    }

    cout << "\n------------ Electricity Bill ------------\n";
    cout << "Units Consumed : " << units << " Units" << endl;
    cout << "Total Bill     : Rs. " << bill << endl;
    cout << "------------------------------------------" << endl;

    return 0;
}
