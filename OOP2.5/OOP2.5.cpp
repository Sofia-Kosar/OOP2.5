#include "Date.h"
#include "Triad.h"
#include <iostream>

using namespace std;

int main() {
    Triad t1, t2;

    cout << "Enter values for the first triad:" << endl;
    cin >> t1;
    cout << "Enter values for the second triad:" << endl;
    cin >> t2;

    cout << "First triad: " << t1 << endl;
    cout << "Second triad: " << t2 << endl;

    if (t1 <= t2) {
        cout << "First triad is less than or equal to the second triad." << endl;
    }
    else {
        cout << "First triad is greater than the second triad." << endl;
    }

    if (t1 < t2) {
        cout << "First triad is less than the second triad." << endl;
    }
    else {
        cout << "First triad is greater or equal than the second triad." << endl;
    }

    if (t1 == t2) {
        cout << "First triad is equal to the second triad." << endl;
    }
    else {
        cout << "First triad is not equal to the second triad." << endl;
    }

    if (t1 != t2) {
        cout << "First triad is not equal to the second triad." << endl;
    }
    else {
        cout << "First triad is equal to the second triad." << endl;
    }

    if (t1 > t2) {
        cout << "First triad is greater than the second triad." << endl;
    }
    else {
        cout << "First triad is less than or equal to the second triad." << endl;
    }

    if (t1 >= t2) {
        cout << "First triad is greater or equal than the second triad." << endl;
    }
    else {
        cout << "First triad is less than the second triad." << endl;
    }

    Date d1(t1), d2(t2);

    cout << "First date: " << d1 << endl;
    cout << "Second date: " << d2 << endl;

    if (d1 <= d2) {
        cout << "First date is less than or equal to the second date." << endl;
    }
    else {
        cout << "First date is greater than the second date." << endl;
    }

    if (d1 < d2) {
        cout << "First date is less than the second date." << endl;
    }
    else {
        cout << "First date is greater or equal than the second date." << endl;
    }

    if (d1 == d2) {
        cout << "First date is equal to the second date." << endl;
    }
    else {
        cout << "First date is not equal to the second date." << endl;
    }

    if (d1 != d2) {
        cout << "First date is not equal to the second date." << endl;
    }
    else {
        cout << "First date is equal to the second date." << endl;
    }

    if (d1 > d2) {
        cout << "First date is greater than the second date." << endl;
    }
    else {
        cout << "First date is less than or equal to the second date." << endl;
    }

    if (d1 >= d2) {
        cout << "First date is greater or equal than the second date." << endl;
    }
    else {
        cout << "First date is less than the second date." << endl;
    }

    return 0;
}
