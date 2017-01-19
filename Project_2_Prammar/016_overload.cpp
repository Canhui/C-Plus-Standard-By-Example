#include <iostream>
#include <string>

using namespace std;

void print(const string &str){
	cout << str;
}

void print(double i){
	cout << i << endl;
}



int main(){
	
	string str = "Pi = ";
	double pi = 3.1415926;		

	print(str);
	print(pi);

	return 0;
}
