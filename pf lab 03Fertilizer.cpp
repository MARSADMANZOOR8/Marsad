#include<iostream>
using namespace std;
main(){
      int pound,cost;
      int area;
      cout<<"Enter weight of bag in pounds: ";
      cin>>pound;
      cout<<"Enter cost of the bag: ";
      cin>>cost;
      cout <<"Enter area covered by the bag in square feet: ";
      cin>>area;
      int costPerPound,costPerSquare;
      costPerPound = cost/pound;
      costPerSquare= cost/area;
      cout<<"Cost of fertilizer per pound is: "<<costPerPound<<endl;
      cout<<"Cost of fertilizing the area per square feet: "<<costPerSquare;

}
