#include<iostream>
using namespace std;
main(){
      int megaBytes,kiloBytes,bytes,bits;
      cout<<"Enter input in Megabytes: ";
      cin>>megaBytes;
      kiloBytes = megaBytes*1024;
      bytes = kiloBytes*1024;
      bits = bytes*8;
      cout<<"Given input in bits is: "<<bits;




}
