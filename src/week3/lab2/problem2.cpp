//
// Created by HASAN SOLIYEV on 17/06/25.
//
#include <iostream>
using namespace std;
void addToSum(int x) {
    static int sum = 0;
    sum += x;
    cout << "Sum is:"<<sum << endl;
}
int main() {
  addToSum(5);
    addToSum(10);
    addToSum(3);
    return 0;
}