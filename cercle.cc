#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
   cout<<endl;
    
   cout<< "Entrez le rayon du cercle"<<endl;
   double rayon;
   cin>>rayon;
   
   
   string choix_2;
   
   cout<<"Voulez vous trouvez l'aire ou la circonférence?"<<endl;
   cin>>choix_2;
   
    
   if(choix_2 == "aire") {
      double aire;
      aire=(rayon * rayon * M_PI);
      cout<<"L'aire vaut: "<< aire<<endl;
  } else if(choix_2 == "circonférence"){
      double circ;
      circ=(2*rayon*M_PI);
      cout<<"La circonférence vaut: "<< circ<<endl;
  }
      
   
   return 0;
}
