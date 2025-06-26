//
// Created by HASAN SOLIYEV on 26/06/25.
//
#include <iostream>
#include <ctime>
using namespace std;
void printMatrix(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int num=rand()%1001;
            cout<<num<<" ";
        }
        cout<<endl;
    }
}
int main() {
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    srand(time(NULL));
    cout<<n<<"x"<<n<<endl;
    printMatrix(n);

    cout<<"Your matrix is "<<n<<" by "<<n<<endl;

    return 0;
}