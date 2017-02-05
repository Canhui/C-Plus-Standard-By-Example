#include <iostream>

using namespace std;

struct book{
	int num_sold_Jan;
	int num_sold_Feb;
	int sum;
}; 


// overload the symbol ">>"
istream & operator>>(istream &in, book &data){
	cout << "num_sold_Jan:";        
	in >> data.num_sold_Jan;
	cout << "num_sold_Feb:";
	in >> data.num_sold_Feb;
	data.sum = data.num_sold_Jan + data.num_sold_Feb;
        return in;
}


// overload the symbol "<<"
ostream & operator<<(ostream &out, book &data){
        out << "Sum_of_2_months: "<< data.sum << endl;
        return out;
}


int main(){

	book bk1;
	
	cin >> bk1;
	 
	cout <<	bk1;
		
	return 0;
}
