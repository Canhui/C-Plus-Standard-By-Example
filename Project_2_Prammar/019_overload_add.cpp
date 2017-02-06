#include <iostream>

using namespace std;

struct book{
	int num_sold;
}; 


int operator+(const book &A, const book &B){
	int sum = A.num_sold;
	sum += B.num_sold;
	return sum;
}


int main(){

	book bk1,bk2;

	cout << "bk1.num_sold: ";
	cin >> bk1.num_sold;
	
	cout << "bk2.num_sold: ";
	cin >> bk2.num_sold;

	cout << "sum of bk1 and bk2: "; 
	cout << bk1+bk2 << endl;
		
	return 0;
}
