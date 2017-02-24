#include <iostream>

using namespace std;


int factorial(int value){
	if (value > 1){
		return factorial(value-1)*value;
	} else{
		return 1;
	}
}


int main(){

	int i = 2;
	
	cout << factorial(i) << endl;
	
	return 0;
}
