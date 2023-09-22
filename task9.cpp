#include<iostream>
using namespace std;
 main() {
	int numb;
	cout << "Enter a 4-digit number: ";
	cin >> numb;
	int n1 = numb%10;
	int n2 = (numb/10)%10;
	int n3 = (numb/100)%10;
	int n4 = (numb/1000)%10;
	
	int modulus;
	modulus = n1+n2+n3+n4;
	cout <<"Sum of the individual digits: " << modulus << endl;
}
	
	