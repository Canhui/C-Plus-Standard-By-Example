#include <iostream>

using namespace std;

void swap(int &v1, int &v2){
	if(v1 == v2){
		return;
	}else{
		int temp = v2;
		v2 = v1;
		v1 = temp;
	}
}


int main(){

	int a = 1;
	int b = 2;
	
	cout << "a=" << a << "," << "b=" << b << endl;	
	swap(a,b);
	cout << "a=" << a << "," << "b=" << b << endl;
	
	return 0;
}
