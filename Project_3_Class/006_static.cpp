#include<iostream>  
#include<string>  

using namespace std;  

    
class Book{

	private:
	string isbn;   
	static const int rate = 1;

	public:  
        void setvalue(string sn){  
            this->isbn = sn;  
        }

	void print(){
	    cout << "ISBN: " <<this->isbn << endl;
	    cout << "Static: " << this->rate << endl << endl;	
	}

};  



int main(){ 
 
    	Book bk1,bk2;

        bk1.setvalue("bk1");
	bk2.setvalue("bk2");
        	
	bk1.print();
	bk2.print();	
	
        return 0;  
}  
