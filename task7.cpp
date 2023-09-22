#include<iostream>
using namespace std;
  main () {
	string name;
	cout << "Enter the movie name: ";
	cin >> name;
	float adultticket;
	cout << "Enter the adult ticket price: $";
	cin >> adultticket;
	float childticket;
	cout << "Enter the child ticket price: $"; 
	cin >> childticket;
	int adnum;
	cout << "Enter the number of adult tickets sold: ";
	cin >> adnum;
	int chnum;
	cout << "Enter the number of child tickets sold: ";
	cin >> chnum;
	float percent;
	cout << "Enter the percentage of the amount to be donated to charity: ";
	cin >> percent;
	cout << "                   " << endl;
	float ticketsales = (adultticket * adnum) + (childticket * chnum);
	float donation = (ticketsales/percent);
	float remaining = ticketsales - donation;
	cout << "Movie: " << name << endl;
	cout << "Total amount generated from ticket sales: $" << ticketsales << endl;
	cout << "Donation to charity (" << percent << "%): " << donation << endl;
	cout << "Remaining amount after donation: $" << remaining << endl;
}
	