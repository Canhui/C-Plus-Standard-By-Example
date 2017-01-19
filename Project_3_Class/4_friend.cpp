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
  	
	friend void friends(Book &bk1,Book &bk2){
	    cout << bk1.isbn << endl;
	    cout << bk2.isbn << endl;
	}
      
};  



int main(){ 
 
    	Book bk1,bk2; 
 
        bk1.setvalue("bk1");
	bk2.setvalue("bk2");
        	
	friends(bk1,bk2);

        return 0;  
}  
