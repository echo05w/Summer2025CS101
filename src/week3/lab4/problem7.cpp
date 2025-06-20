//
// Created by HASAN SOLIYEV on 20/06/25.
//
#include <iostream>
#include <ctime>
using namespace std;
int main() {
 srand(time(0));
    int arr[6]={};
    for (int i = 0; i < 10000; i++) {
       arr[1+rand()%6-1]++;
    }
for (int i = 0; i <6; i++) {
    cout << i+1<<":"<<arr[i] << endl;
}
    return 0;
}