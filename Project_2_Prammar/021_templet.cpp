#include <iostream>

using namespace std;

template <typename T>
bool smaller(const T &v1, const T&v2){
	if(v1 < v2) return 1;
	else return 0;
}



int main(){

	int a = 1, b = 2;
	cout << "a= " << a << ", b= " << b << endl; 
	cout << "a(int) is smaller than b(int)? " << smaller(a,b) << endl;
	cout << "b(int) is smaller than a(int)? " << smaller(b,a) << endl << endl;
	
	double c = 1.0, d = 1.1;
	cout << "c= " << c << ", d= " << d << endl; 
	cout << "c(double) is smaller than d(double)? " << smaller(c,d) << endl;
	cout << "d(double) is smaller than c(double)? " << smaller(d,c) << endl;
	
	return 0;
}
