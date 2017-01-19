#include <iostream>

using namespace std;

void print(const int *dp, const int n){
	for(int i = 0; i < n; i++){
		cout << *dp++ << endl;
	}	
}



int main(){

	const int N = 10;

	int data[N] = {0,2,4,6,4,5,6,7,8,9};
	print(data,N);
	
	return 0;
}
