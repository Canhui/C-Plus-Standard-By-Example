#include <iostream>

using namespace std;


int main(){
	
	// Shifting operation
	unsigned char c1 = 129; // 1000 0001 in binary
	cout << endl;	
	cout << "---------shifting operation----------------"<<endl;	
	cout << "original value = "<<(int)c1 << endl << endl;
	
	unsigned char temp = c1 << 7;
	cout << "shift to left 7 bits or steps = "<<(int)temp<< endl<<endl;	
	
	temp = c1 >> 7;	
	cout << "shift to right 7 bits or steps = "<<(int)temp << endl<<endl<<endl;

	return 0;
}
