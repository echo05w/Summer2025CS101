//
// Created by HASAN SOLIYEV on 17/06/25.
//
#include <iostream>
using namespace std;
void power_two() {
    static int power_two = 1;
    power_two = power_two * 2;
    cout << power_two << endl;
}
int main() {
    power_two();
    power_two();
    power_two();
    power_two();
    return 0;
}