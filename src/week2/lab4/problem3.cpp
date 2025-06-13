//
// Created by HASAN SOLIYEV on 13/06/25.
//
#include <iostream>
using namespace std;
int main() {
    float n;
    cout << "Enter n: ";
    cin >> n;
    float sum=0.0;
    for(int i=1;i<=n;i++) {
        sum+=1.0/i;
        cout << "1/" << i;
        if (i != n) cout << " + ";
    }
    cout << "\nSum = " << sum << endl;
}