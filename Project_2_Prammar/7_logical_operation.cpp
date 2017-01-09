#include <iostream>

using namespace std;


int main(){

	// logical operations
	unsigned char c_1 = 1; // or 0000 0001 in binary
	unsigned char c_2 = 3; // or 0000 0011 in binary

	unsigned char temp;
	temp = c_1 & c_2;

	cout << "---------logical operation----------------"<<endl;	
	cout << endl;		
	cout << "0000 0001 & 0000 0011 = "<<(int)temp << endl<<endl;
	
	temp = c_1 | c_2;
	cout << "0000 0001 | 0000 0011 = "<<(int)temp << endl<<endl;
		
	temp = c_1 ^ c_2;
	cout << "0000 0001 ^ 0000 0011 = "<<(int)temp << endl<<endl;

	return 0;
}
