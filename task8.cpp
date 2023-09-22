#include<iostream>
using namespace std;
  main () {
	float vegprice;
	float fruitprice;		
	cout << "Enter vegetable price per kilogram (in coins): ";
	cin >> vegprice;
	cout << "Enter fruit price per kilogram (in coins): ";
	cin >> fruitprice;
	int kgveg;
	int kgfr;	
	cout << "Enter total kilograms of vegetables: ";
	cin >> kgveg;
	cout << "Enter total kilograms of fruits: ";
	cin >> kgfr;
	float totalcoins;
	totalcoins = (vegprice * kgveg) + (fruitprice * kgfr); 
	float totalrps = totalcoins/1.94;
	cout << "Total earnings in Rupees (Rps): " << totalrps << endl;
}