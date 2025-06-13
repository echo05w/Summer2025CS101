//
// Created by HASAN SOLIYEV on 13/06/25.
//
#include <iostream>
using namespace std;
int main() {
    int num;
    while (1) {
        cin>>num;
        if (num < 0) {
            cout <<endl<< num <<" The number is negative" <<endl;
            break;
        }
        cout  <<num <<endl;
    }

}