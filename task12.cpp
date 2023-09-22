#include<iostream>
using namespace std;
 main() {
	int paintmeters;
	int widmeters;
	int himeters;
	int no;
	cout <<"Number of square meters you can paint: ";
	cin >> paintmeters;
	cout << "Width of the single wall (in meters): ";
	cin >> widmeters;
	cout << "Height of the single wall (in meters): ";
	cin >> himeters;
	no = paintmeters/(widmeters*himeters);
	cout << "Number of walls you can paint: " << no << endl;
}