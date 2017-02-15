#include <iostream>

using namespace std;


int main(){

	int i = 42;
	const int &ci = i;
	cout << "const value(read only): " <<ci << endl;
	
	return 0;
}
