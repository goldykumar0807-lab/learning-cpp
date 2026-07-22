#include <iostream>
using namespace std;

int main() {
    char signal;

    cout << "Enter signal (R, Y, G): ";
    cin >> signal;

    switch (signal) {
        case 'R':
        case 'r':
            cout << "Stop";
            break;

        case 'Y':
        case 'y':
            cout << "Get Ready";
            break;

        case 'G':
        case 'g':
            cout << "Go";
            break;

        default:
            cout << "Invalid Signal";
    }

    return 0;
}
