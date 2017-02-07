#include <iostream>

using namespace std;

struct book{
	int num;
}; 


// overload the symbol "=="
bool operator==(const book &A, const book &B){
	return A.num==B.num;
}


// overload the symbol "!="
bool operator!=(const book &A, const book &B){
	return !(A.num==B.num);
}



int main(){

	book bk1, bk2;
	
	cout << "bk1.num: " << endl;
	cin >> bk1.num;
	 
	cout << "bk2.num: " << endl;
	cin >> bk2.num;
	
	if (bk1==bk2)
		cout << "Objects are equal!" << endl;
	if(bk1!=bk2)
		cout << "Objects are not equal!" << endl;
		
	return 0;
}
