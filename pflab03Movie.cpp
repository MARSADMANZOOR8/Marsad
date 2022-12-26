#include<iostream>
using namespace std;
main(){
      int adultPrice,childPrice,numChild,numAdult;
      string name;
      float Percentage,Donation,afterDonation,Sum=0;
      cout<<"Enter movie name: ";
      cin>>name;
      cout<<"Enter price of an adult ticket: ";
      cin>>adultPrice;
      cout<<"Enter price of a child ticket: ";
      cin>>childPrice;
      cout<<"Enter number of adult tickets sold: ";
      cin>>numAdult;
      cout<<"Enter number of child tickets sold: ";
      cin>>numChild;
      cout<<"Enter percentage you want to donate: ";
      cin>>Percentage;
      Sum =(adultPrice*numAdult) + (childPrice*numChild);
      Donation = Sum * (Percentage/100);
      afterDonation = Sum - Donation;
      cout<<"_____________________________________"<<endl;
      cout<<"Total amount generated: "<<Sum<<endl;
      cout<<"Amount after donation:  "<<afterDonation;
      
    
      

}