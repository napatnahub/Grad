#include <iostream>
using namespace std;
int main()
{
	int number;
	cout << "Enter your score:";
	cin >> number;
	if (number >= 90 && number <= 100) {
		cout << "Grad:A" << endl;
	}
	else if (number >= 80 && number <= 89) {
		cout << "Grad:B" << endl;
	}
	else if (number >= 70 && number  <= 79) {
		cout << "Grad:C" << endl;
	}
	else if (number >= 60 && number <= 69) {
		cout << "Grad:D" << endl;
	}
	else if (number >= 0 && number <= 59) {
		cout << "Grad:F" << endl;
	}
	else {
		cout << "ERORR" << endl;
	}
	return(0);
}