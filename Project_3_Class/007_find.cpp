#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){

    string str = "helllo";

    if (str.find("e") == string::npos) 
        cout << "no exist" << endl;
    else
        cout << "exist" << endl;

    if (str.find("z") == string::npos)  
        cout << "no exist" << endl;
    else
        cout << "exist" << endl;
	
    return 0;
}
