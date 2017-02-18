#include <iostream>

using namespace std;

// 没有意义，只能访问头元素
int main(){

	int array[3] = {1,2,3};

	int (&rarray)[3] = array;
		
	cout << rarray[0] << endl;
	cout << rarray[1] << endl;
	cout << rarray[2] << endl;
	cout << rarray[3] << endl;
	cout << rarray[4] << endl;
	

	return 0;
}
