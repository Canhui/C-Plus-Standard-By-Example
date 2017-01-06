#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main(){
	string str;
	vector <string> vec;
	
	for (int i = 0; i < 3; i++){
		cin >> str;
		vec.push_back(str);
	}

	cout << endl;
	cout << "What you put in is:" << endl;
	for (int i = 0; i < vec.size(); i++){
		cout << vec[i] << ",";
	}
	cout << endl;	

	return 0;
}
