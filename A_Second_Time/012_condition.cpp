#include <iostream>
#include <string>

using namespace std;

int main(){
	int grade = 95;
	string result;

	result = (grade>90)?"high pass" : (grade<60)?"fail" : "pass";	
	
	cout << result << endl;

	return 0;
}
