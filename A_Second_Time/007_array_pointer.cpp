#include <iostream>

using namespace std;

// 没有意义，只能访问头元素
int main(){

	int array[3] = {1,2,3};

	int (*parray)[3];
	parray = &array;
		
	cout << *parray[0] << endl;
	cout << *parray[1] << endl;
	cout << *parray[2] << endl;
	cout << *parray[3] << endl;
	cout << *parray[4] << endl;
	

	return 0;
}
