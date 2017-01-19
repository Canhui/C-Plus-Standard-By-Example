#include <iostream>
#include <string>
#include "1_struct.h"

using namespace std;

int main(){

	book bk1, bk2;
	
	bk1.isbn = "2342FD2FF";
	bk1.numbers_sold = 12;
	bk1.benefits = 142.12;

	bk2.isbn = "5323FDGFG";
	bk2.numbers_sold = 30;
	bk2.benefits = 289;	
			
	cout << "book1.isbn: " << bk1.isbn << endl;
	cout << "book1.numbers_sold: "<< bk1.numbers_sold << endl;
	cout << "book1.benefits: " << bk1.benefits << endl << endl;	
	
	cout << "book2.isbn: " << bk2.isbn << endl;
	cout << "book2.numbers_sold: " << bk2.numbers_sold << endl;
	cout << "book2.benefits: " << bk2.benefits << endl << endl;

	return 0;

}
