#include<iostream>
using namespace std;
  main () {
	float size;
	int cost;
	int area;
	cout << "Enter the size of the fertilizer bag in pounds: ";
	cin >> size;
	cout << "Enter the cost of the bag: $";
	cin >> cost;
	cout << "Enter the area in square feet that can be covered by the bag: ";
	cin >> area;
	float costpound = cost/size;
	float costsquare = (cost * area)*0.01;
	cout << "Cost of fertilizer per pound: $" << costpound << endl;
	cout << "Cost of fertilizing per square foot: $" << costsquare << endl;
}
