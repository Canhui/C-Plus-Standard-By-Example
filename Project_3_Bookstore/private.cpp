#include<iostream>  
#include<string>  

using namespace std;  

    
class Book{

	private:
	string isbn;   


	public:  
        void setvalue(string sn){  
            this->isbn = sn;  
        }
  
	void print(){  
            cout<<"ISBN is: "<< this->isbn <<endl;   
        }
      
};  



int main(){ 
 
    	Book bk1; 
 
      	string isbn = "Hello world";
        bk1.setvalue(isbn);
        bk1.print(); 

        return 0;  
}  
