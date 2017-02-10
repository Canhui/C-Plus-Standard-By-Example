#include <iostream>

using namespace std;



template <typename T>
bool smaller(const T &v1, const T &v2){
	if(v1 < v2) return 1;
	else return 0;
}

template <typename T>
bool bigger(const T &v1, const T &v2){
	if(v1 > v2) return 1;
	else return 0;
}

template <typename T>
void compare(const T &v1, const T&v2){
	if(smaller(v1,v2)){
		cout << "smaller!" << endl;
	} else if(bigger(v1,v2)){
		cout << "bigger!" << endl;
	} else{
		cout << "Same!" << endl;
	}
}


int main(){

	int a = 1, b = 2;
	compare(a,b);
	
	double c = 1.0, d = 1.1;
	compare(a,b);
	
	double e = 1.1, f = 1.0;
	compare(e,f);

	double g = 1.1, h = 1.1;
	compare(g,h);
	
	return 0;
}
