#include <iostream>
#include <string.h>

using namespace std;

// 字符串之差
int main(){

	char str0[]="0";
	char str1[]="1";
	char str2[]="2";
	

	cout << strcmp(str0,str1) << endl;
	cout << strcmp(str1,str1) << endl;
	cout << strcmp(str1,str2) << endl;

	return 0;
}
