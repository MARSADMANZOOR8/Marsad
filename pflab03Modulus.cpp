#include<iostream>
using namespace std;
main(){
      int num,Sum=0,mod1,mod2,mod3,mod4,mod5,num1,num2,num3;
      cout<<"Enter a number: ";
      cin>>num;
      mod1 = num%10;
      num1 = num/10;
      mod2 = num1%10;
      num2 = num1/10;
      mod3 = num2%10;
      num3 = num2/10;
      mod4 = num3%10;
      Sum = mod1+mod2+mod3+mod4;
      cout<<"Sum of digits is: "<<Sum;
      
      
}
