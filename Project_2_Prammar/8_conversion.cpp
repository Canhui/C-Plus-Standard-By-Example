#include <iostream>

using namespace std;

int main(){
	
	/*----------explicit conversion------------*/	
	double i1 = 12.32;
	double i2 = 12.68;
	int i3 = static_cast<int>(i1+i2);
	cout << i3 << endl;	
	

	/*----------implicit conversion------------*/
	int i4 = 12;
	int i5 = 5;
	double i6 = static_cast<double>(i4/i5);
	cout << i6 << endl;

	return 0;

}
