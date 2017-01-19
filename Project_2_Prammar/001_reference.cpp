#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	
	int value = 0;
	cout << "Original value: "<<value << endl;;
	
	int &ref_value = value;
	cout << "Reference value: " << ref_value << endl<< endl;

	value = 1;
	cout << "Change original value from 0 to: " << value << endl;
	
	cout << "Accordingly, the reference value is changed to: " << ref_value << endl<<endl;

	ref_value = 2;
	cout << "Change the reference value from 1 to: " << ref_value << endl;

	cout << "Accordingly, the original value is changed to: " << value << endl<<endl;
	return 0;
	
}

