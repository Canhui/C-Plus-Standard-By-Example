#include <iostream>

using namespace std;


int call_static(){
	static int count = 0;
	count ++;

	return count;
}


int call_temporary(){
	int count = 0;
	count ++;

	return count;	
}


int main(){
	
	cout << "static value: " << endl;
	cout << call_static() << endl;
	cout << call_static() << endl;
	cout << call_static() << endl;

	cout << "temporary value: " << endl;
	cout << call_temporary() << endl;
	cout << call_temporary() << endl;
	cout << call_temporary() << endl;

	return 0;
}
