//
// Created by HASAN SOLIYEV on 13/06/25.
//
#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 50; i++) {
        if (i % 5 == 0|| i % 3 == 0) {
            continue;
        }
        cout << i << " ";
    }
}