#include<iostream>
using namespace std;
main(){
      float ecat,matric,inter;
      float aggregate,perc1,perc2,perc3;
      float wei1,wei2,wei3;
      cout<<"Enter marks in Ecat: ";
      cin>>ecat;
      cout<<"Enter marks obtained in matric: ";
      cin>>matric;
      cout<<"Enter marks obtained in Inter: ";
      cin>>inter;

      perc1 = (ecat/400)*100;
      perc2 = (matric/1100)*100;
      perc3 = (inter/550)*100;
 
      wei1 = perc1*0.5;
      wei2 = perc2*0.1;
      wei3 = perc3*0.4;
     
      aggregate = wei1+wei2+wei3;
      cout<<"Your Aggregate is: "<<aggregate;
      
      

}
