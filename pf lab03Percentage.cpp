#include<iostream>
using namespace std;
main(){
      int Sub1,Sub2,Sub3,Sub4,Sub5;
      float Sum = 0;
      float Percentage;
      cout<<"Enter marks in Subject 1: ";
      cin>>Sub1;
      cout<<"Enter marks in Subject 2: ";
      cin>>Sub2;
      cout<<"Enter marks in Subject 3: ";
      cin>>Sub3;
      cout<<"Enter marks in Subject 4: ";
      cin>>Sub4;
      cout<<"Enter marks in Subject 5: ";
      cin>>Sub5;
      Sum = Sub1+Sub2+Sub3+Sub4+Sub5;
      Percentage = Sum/500 *100;
      cout<<"Your percentage is: "<<Percentage;


}