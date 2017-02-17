#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

	vector<int> array(10, 0);
 
	cout<<"Size of the array: "<<array.size()<<" " << endl;

	array.push_back(99);
	cout<<"Size of the array: "<<array.size()<<" " << endl;
 
        return 0 ;
}
