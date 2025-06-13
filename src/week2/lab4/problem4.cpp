//
// Created by HASAN SOLIYEV on 13/06/25.
//
#include <iostream>
using namespace std;
int main() {
    int N;
    cout << "Enter a number N : ";
    cin >> N;
    while (true) {
        N++;
        int count = 0;
        for (int i = 1; i <= N; i++) {
            if (N % i == 0) {
                count++;
            }
        }
        if (count == 2) {
            cout << "The prime number that  is greater than your input is = "<< N << endl;
            break;
        }
    }
}
