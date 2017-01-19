#include <iostream>

using namespace std;


int f(){
                      
	static int s = 0;                   

	s++;
	
	return s;
} 




int main(){

	cout << f() << endl;
	cout << f() << endl;
	cout << f() << endl;
	return 0;

}
