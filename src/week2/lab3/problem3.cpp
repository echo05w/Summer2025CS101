//
// Created by HASAN SOLIYEV on 12/06/25.
//
#include <iostream>
using namespace std;
int main() {
    for (char i='A';i<='Z';i++) {
        cout<<i<<" ";
        if (i!=65 && i%5==4) cout<<endl;
    }
    return 0;
}