#include <iostream>

using namespace std;

template <typename T>
T add(const T &v1, const T&v2){
	return v1+v2;
}

//bool smaller(const T &v1, const T&v2){
//	if(v1 < v2) return 1;
//	else return 0;
//}



int main(){

	int a = 1, b = 2;
	cout << "a= " << a << ", b= " << b << endl; 
	cout << "a(int) + b(int) = " << add(a,b) << endl;
	
	double c = 1.0, d = 1.1;
	cout << "c= " << c << ", d= " << d << endl; 
	cout << "c(double) + d(double) = " << add(c,d) << endl;

	
	return 0;
}
