#include <iostream>

using namespace std;

// write by C++ reference  
void add(int &val){
	val++;
}


// write by C++ pointers
void add2(int *val){
	*val = *val + 20;
}



int main(){

	int v = 1;
	cout << "Original val = " << v << endl;
	
	add(v);
	cout << "After adding, val = " << v << endl;


	int *vp = &v;
	add2(vp);
	cout <<"After additional adding, val = " << *vp << endl;

	return 0;

}
