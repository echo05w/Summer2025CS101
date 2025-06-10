//
// Created by HASAN SOLIYEV on 10/06/25.
//
#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    switch (x/10)
    {
        case 10:
        case 9:
        cout<<"A dude . you got "<<x<<"\n";
        break;
        case 8:
        cout<<"B dude . you got "<<x<<"\n";
        break;
        case 7:
        cout<<"C dude . you got "<<x<<"\n";
        break;
        case 6:
        cout<<"D dude . you got "<<x<<"\n";
        break;
        default:
        cout<<"Failed dude . you got "<<x<<"\n";
    }
}