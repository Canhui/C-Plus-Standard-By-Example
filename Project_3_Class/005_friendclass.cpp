#include <iostream>
#include <string>

using namespace std;


class classmain; // declear


class classfriend {
	public:
    	void test(classmain& a);
};


class classmain {
	private:
    	string id;
    	
	public:
    	void print(){
        	cout <<"id = " << this->id << endl;
    	}

    	friend void classfriend::test(classmain& a);
};


void classfriend::test(classmain& a){  
    	a.id = "123";        
	a.print();    
}


int main (){
    classmain a;
    classfriend b;
    b.test(a);

    return 0;
}
