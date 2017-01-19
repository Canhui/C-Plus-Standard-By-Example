#include <iostream>

using namespace std;

int main(){
	
	int val = 1024;
	int *p = & val;
	int **pp = & p;
	int ***ppp = & pp;	

	cout << "val = " << val << endl;
	cout << "*p = "<< *p << endl;
	cout << "**pp = " << **pp << endl;
	cout << "***ppp = " << ***ppp << endl;
	
	return 0;

}
