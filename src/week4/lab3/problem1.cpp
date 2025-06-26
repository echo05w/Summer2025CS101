//
// Created by HASAN SOLIYEV on 26/06/25.
//
#include <iostream>
using namespace std;
bool printZeroOrOne(int a) {
return(a>=0);
    return false;
}
int main() {
    const int size=5;
    int a[size];
    bool foundPosOrZero = false;
    cout<<"Enter 5 numbers: "<<endl;
   for (int i = 0; i < size; i++) {
       cin >> a[i];
       if (printZeroOrOne(a[i])) {
           foundPosOrZero = true;
       }
   }
    cout << (foundPosOrZero?1:0) << endl;
  return 0;
}

// int main() {
//     int num;
//     bool hasNoNegative = false;
//     cout<<"Enter 5 ns: "<<endl;
//     for (int i=0;i<5;i++) {
//         cin>>num;
//         if (num >= 0) {
//             hasNoNegative = true;
//         }
//     }
//     cout<<(hasNoNegative?"NO neg":"YES neg")<<endl;
// }