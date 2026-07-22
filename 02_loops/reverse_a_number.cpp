#include <iostream>
using namespace std;

int main() {
    int num, reverse = 0;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }

    cout << "Reversed number: " << reverse;

    return 0;
}
