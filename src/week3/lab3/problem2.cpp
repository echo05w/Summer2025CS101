//
// Created by HASAN SOLIYEV on 19/06/25.
//
#include <iostream>
using namespace std;
float sumOfSeries(float n) {
if (n == 1) return 1;
    return 1/(n*n)+sumOfSeries(n-1);
}
int main() {
float num;
    cout << "Enter a number: ";
    cin >> num;
    cout<<"The sum of the series is: "<<sumOfSeries(num)<<endl;

    return 0;
}