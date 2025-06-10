//
// Created by HASAN SOLIYEV on 10/06/25.
//
//
// Created by HASAN SOLIYEV on 10/06/25.
//
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
   srand(time(0));
  int r=1+rand()%100;
   string guess;
   cin>>guess;
   if(r%2==0 && guess=="even")
   {
      cout<<"You won"<<endl;
   }else if(r%2==1 && guess=="odd")
   {
       cout<<"You lost"<<r<<endl;
   }

}