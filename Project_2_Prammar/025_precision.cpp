#include <iostream>
#include <math.h>

using namespace std;

int main(){
	cout << "precision: " << cout.precision() << ", value: " << sqrt(2) << endl;

	cout.precision(12);
	cout << "precision: " << cout.precision() << ", value: " << sqrt(2) << endl;

	return 0;
}
