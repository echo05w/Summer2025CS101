//
// Created by HASAN SOLIYEV on 26/06/25.
//
#include <iostream>
using namespace std;
int main() {
    int year;
    cout<<"Enter year: "<<endl;
    cin >> year;
    int century;
    if (year%100==0) {
        cout<<year/100<<" century"<<endl;
        century=year/100;
    }else {
        cout<<(year/100)+1<<" century"<<endl;
        century=(year/100)+1;
    }
       switch (century) {
           case 5:cout<<"Fall of Roman Empire "; break;
            case 13:cout<<"Mongols century "; break;
               case 15:cout<<"Osman era "; break;
               case 19:cout<<"Great Britain "; break;
               case 20:cout<<"WW1 and WW2 "; break;
               case 21:cout<<"Nowadays "; break;
               default: cout<<year;
       }
    }
