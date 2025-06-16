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
void fun(double a, double b) {
    float perimeter=a+b;
    cout<<"perimeter="<<perimeter<<endl;
    float area=perimeter*perimeter;
    cout<<"area="<<area<<endl;
}
int main() {
    float radius;
    double a, b;
    cout<<"Enter the radius(for circle) or a and b(for rectangle): ";
    cin>>radius;
    cin>>a>>b;
    fun(radius);
    fun(a , b);
}