//
// Created by HASAN SOLIYEV on 16/06/25.
//
#include <iostream>
using namespace std;
void  fun(float radius) {
    float area=2*radius*3.14;
    float circumference=3.14*radius*radius;
    cout<<"area="<<area<<endl;
    cout<<"circumference="<<circumference<<endl;
}
int main() {
    float radius;
    cout<<"Enter the radius: ";
    cin>>radius;
    fun(radius);
}