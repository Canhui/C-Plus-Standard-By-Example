#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	int i = -16;
	double d = 3.1415926;

	cout << left << "i: " << i << endl;
	cout << left << "d: " << d << endl;
	cout << endl;	


	cout << right << setw(24) << "i: " << i << endl;
	cout << right << setw(24) << "d: " << d << endl;
	cout << endl;

	cout << "i: " << setw(24) << i << endl;
	cout << "d: " << setw(24) << d << endl;
	cout << endl;

	return 0;
}
