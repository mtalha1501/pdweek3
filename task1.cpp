#include<iostream>
using namespace std;
  main () {
	int sides;
	cout << "Enter the number of sides of the polygon: ";
        cin >> sides;
        int sum;
        sum = (sides - 2) * 180;
	cout << "The sum of internal angles of a " << sides<<"-sided polygon is: " << sum << " degrees" << endl;
}
	