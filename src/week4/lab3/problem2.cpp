//
// Created by HASAN SOLIYEV on 26/06/25.
//
#include <iostream>
using namespace std;
int main() {
    int height;
    cout<<"Enter height: "<<endl;
    cin >> height;
    if (height==0) {
        cout<<"Height must be greater than 0"<<endl;
    }
   else if (height>0) {
        for (int i=1;i<=height;i++) {
            for (int j=1;j<=i;j++) {
                cout<<i;
            }
            cout<<endl;
        }
   }else {
       cout<<"Height must be positive"<<endl;
   }
}

// int main() {
//     int height;
//     cout<<"Enter height: "<<endl;
//     cin >> height;
//     if (height==0) {
//         cout<<"Height must be greater than 0"<<endl;
//     }
//     else if (height>0) {
//         for (int i=1;i<=height;i++) {
//             for (int j=1;j<=i;j++) {
//                 cout<<"Thank you Luna \u2665  ";
//             }
//             cout<<endl;
//         }
//     }else {
//         cout<<"Height must be positive"<<endl;
//     }
// }