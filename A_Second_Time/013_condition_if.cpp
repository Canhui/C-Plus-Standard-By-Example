#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main(){
	const string rank[6] = {"F", "D", "C", "B", "A", "A++"};
	
	int score = 100;	
	
	if(score < 60){
		cout << rank[0] << endl;
	} else{
		cout << rank[(score-50)/10]<<endl;
	}
	
	return 0;
}

