#include<iostream>
using namespace std;
main(){
      float coinsVegetable,coinsFruit,totalEarning=0,earningRupee;
      int totalVegetable,totalFruit;
      cout<<"Enter price of vegetable per kilogram: ";
      cin>>coinsVegetable;
      cout<<"Enter price of fruit per kilogram: ";
      cin>>coinsFruit;
      cout<<"Enter total kilogram of vegetables sold: ";
      cin>>totalVegetable;
      cout<<"Enter total kilogram of fruits sold: ";
      cin>>totalFruit;
      totalEarning = (coinsFruit*totalFruit)+(coinsVegetable*totalVegetable);
      earningRupee = totalEarning/1.94;
      cout<<"Total earning in rupees is: "<<earningRupee<<" Rs";
      
       

}