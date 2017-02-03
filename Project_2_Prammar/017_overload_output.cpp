#include <iostream>

using namespace std;

struct book{
	int isbn;
	string bkname;
}; 


// overload the symbol "<<"
ostream & operator<<(ostream &out, book &data){
        out << "ISBN: "<< data.isbn <<"\nBook Name: "<< data.bkname << endl;
        return out;
}


int main(){

	book bk1;
	bk1.isbn = 1321;
	bk1.bkname = "hello world";
	
	// The traditional implementation	
	//cout << bk1.isbn << endl;
	//cout << bk1.bkname << endl;
	
	// An new implementation of overloading 
	cout <<	bk1;
		
	return 0;
}
