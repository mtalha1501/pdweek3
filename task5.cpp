#include<iostream>
using namespace std;
  main () {
	float weightloss;
	string name;
	cout << "Enter the Name of the Person: ";
	cin >> name;
	cout << "Enter the target weight loss in kilograms: ";
	cin >> weightloss;
	int days; 
	days =  weightloss * 15.0;
	cout << name << " will need " << days << " days to lose " << weightloss << " kg of weight by following the doctor's suggestions";
}
	