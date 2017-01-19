#include <iostream>
#include <string>

using namespace std;

int length(const string &str){
	return str.size();
}


int main(){

	string str = "Hello World";
	int len = length(str);
	cout << len << endl;

	return 0;
}
