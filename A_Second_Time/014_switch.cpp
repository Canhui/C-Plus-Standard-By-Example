#include <iostream>

using namespace std;

int main(){

	char ch;
	while(cin >> ch){
		if(ch=='e'){
			break;
		} else{
			switch (ch) {
				case 'a':
					cout << "a" << endl;
					break;
				case 'b':
					cout << "b" << endl;
					break;
				case 'e':
					break;
			}
		}
	}

	return 0;
}
