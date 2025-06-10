//
// Created by HASAN SOLIYEV on 10/06/25.
//
//
// Created by HASAN SOLIYEV on 10/06/25.
//
#include <iostream>
using namespace std;
int main()
{
   int digit;
   cin>>digit;
   if(digit>-1 && digit<10)
   {
      switch(digit){
      case 1:
         cout<<"One"<<endl;
         break;
      case 2:
         cout<<"Two"<<endl;
         break;
      case 3:
         cout<<"Three"<<endl;
         break;
      case 4:
         cout<<"Four"<<endl;
         break;
      case 5:
         cout<<"Five"<<endl;
         break;
      case 6:
         cout<<"Six"<<endl;
         break;
      case 7:
         cout<<"Seven"<<endl;
         break;
      case 8:
         cout<<"Eight"<<endl;
         break;
      case 9:
         cout<<"Nine"<<endl;
         break;
      case 10:
         cout<<"Zer0"<<endl;
         break;
      default:
         cout<<"Not a digit"<<endl;
      }
   }else
   {
      cout<<"Not a digit"<<endl;
      }
   }
