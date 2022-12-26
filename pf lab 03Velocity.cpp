#include<iostream>
using namespace std;
main(){
      int Vi,Vf,Acc,time;
      cout<<"Enter initial velocity: ";
      cin>>Vi;
      cout<<"Enter acceleration: ";
      cin>>Acc;
      cout<<"Enter time: ";
      cin>>time;
      Vf = Vi + (Acc*time);
      cout<<"The final velocity is: "<<Vf;
   
}

