//
// Created by HASAN SOLIYEV on 19/06/25.
//
#include <iostream>
using namespace std;

template <typename T>
void compareValues(T a, T b) {
    if (a == b) {
        cout << "Values are equal" << endl;
    } else {
        cout << "Larger value is: " << (a > b ? a : b) << endl;
    }
}

template <typename T>
T middle(T a, T b, T c) {
    if ((a >= b && a <= c) || (a <= b && a >= c))
        return a;
    else if ((b >= a && b <= c) || (b <= a && b >= c))
        return b;
    else
        return c;
}
template <typename T>
double average(T a, T b) {
    return (a + b) / 2.0;
}
int main() {
    compareValues(10, 20);
    compareValues(3.14, 3.14);
    compareValues(string("apple"), string("banana"));

    cout << "Middle of (3, 8, 5): " << middle(3, 8, 5) << endl;
    cout << "Middle of ('x', 'm', 'z'): " << middle('x', 'm', 'z') << endl;

    cout << "Average of (4, 6): " << average(4, 6) << endl;
    cout << "Average of (5.5, 2.5): " << average(5.5, 2.5) << endl;

    return 0;
}
