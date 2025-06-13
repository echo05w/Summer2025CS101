//
// Created by HASAN SOLIYEV on 13/06/25.
//
#include <iostream>
#include <ctime>
using namespace std;
int main() {
    int numOfOdd=0, numOfEven=0;
    int i=1;
    srand(time(0));
    // for(int i=1;i<=1000;i++) {
    //     int randNum=rand()%1000;
    //     if(randNum%2==0) {
    //         numOfEven++;
    //     }else {
    //         numOfOdd++;
    //     }
    // }
    while(i<=1000) {
        int randNum=rand()%1000;
        if(randNum%2==0) {
            numOfOdd++;
        }else {
            numOfEven++;
        }
        i++;
    }
    cout<<"The number of even number is "<<numOfEven<<endl;
}