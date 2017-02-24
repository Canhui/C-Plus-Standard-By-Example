#include <iostream>

using namespace std;

void reset(int &i){
	i = 0;
}


int main(){
	int i = 42;
	cout << "i = " << i << endl;
	
	reset(i);
	cout << "i = " << i << endl;
	
	return 0;
}
