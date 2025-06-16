//
// Created by HASAN SOLIYEV on 16/06/25.
//
#include <iostream>
using namespace std;
float linearAcceleration(float v1, float v2,float t) {
  return  (v2-v1)/t;
}
int main() {
    float v1, v2,t;
    cout<<"Enter v1 , v2, t: ";
    cin>>v1>>v2>>t;
    float result = linearAcceleration(v1,v2,t);
    cout<<"The linear acceleration is: "<<result<<endl;
}