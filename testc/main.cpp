#include <iostream>
#include <iomanip>
using namespace std;
float calculerTTC(float prix ,float TVA=0.147){
	return prix=prix*(1+TVA);
}
int main()
{
	float a,p;
	string titre;
	cout <<"entrer le titre de produit : " ;
cin >> titre ;
cout <<"entrer le prix de produit : " ;
cin >> a ;
p=calculerTTC(a) ;
cout <<"+------------------+------------------+-----------------+ "<<endl;
cout <<"+ Article          + Prix             + Prix TTC        + "<<endl;
cout <<"+------------------+------------------+-----------------+ "<<endl;
cout <<" "<< titre "          "<<" "<< a "          "<<" "<< p "          " <<endl;
return 0 ;
}
