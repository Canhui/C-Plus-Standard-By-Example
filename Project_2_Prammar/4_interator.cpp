#include <iostream>  
#include <vector>  
      
using namespace std;  

// use interator to read/write the vector types
int main(){  
	
        // vector = 6,6,6
        vector<int> vec(3,6);  
        cout<<"Original Val："<<endl;  
        
	// modified vector by interator
	int i=0;  
        for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++){  
            i++;  
            cout<< *iter <<endl;  
            *iter = (*iter)+3;  
        }  
        
	// print modified vector = 9,9,9  
        cout<<"Modified Val："<<endl;  
        for(vector<int>::const_iterator iter = vec.begin(); iter!=vec.end(); iter++){  
            cout<<*iter<<endl;  
        }  
  
        return 0;      
}  
