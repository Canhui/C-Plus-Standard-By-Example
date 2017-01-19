#include<iostream>  
#include<string>  



using namespace std;  
    
class Book{
  
        string isbn;  
   
	public:  

        void initisbn(string sn){  
            this->isbn = sn;  
        }  

	 void print(){  
            cout<<"ISBN is: "<<this->isbn<<endl;   
        }  
      
};  


int main(){ 
 
    	Book bk1; 
 
      	string isbn = "Hello world";
        bk1.initisbn(isbn);
        bk1.print(); 

        return 0;  
    }  
