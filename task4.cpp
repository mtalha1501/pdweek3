#include<iostream>
using namespace std;
   main () {
	float impcount;
	int playercount;
	cout << "Enter Imposter Count: ";
	cin >> impcount;
	cout << "Enter Player Count: ";
	cin >> playercount;
	int chance;
	chance = (impcount/playercount) * 100;
	cout << "Chance of being an imposter: " << chance << "%" << endl;
}
	