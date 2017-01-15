#include <iosrteam>

using namespace std;


int factorial(int val){
	if(val > 1){
		return factorial(val-1)*val;
	}else{
		return 1;
	}
}


int main(){
	
	int init_val = 3;
	cout << factorial(init_val) << endl;
	
	return 0;
}