#include <iostream>
#include <string.h>

using namespace std;

int main(){

	char str0[8]={'a','b','c','d','e','f','i','g'};
	char str1[]="abcdefig";
	char str2[]="ab cdefig";

	cout << strlen(str0) << endl;
	cout << strlen(str1) << endl;
	cout << strlen(str2) << endl;

	return 0;
}
