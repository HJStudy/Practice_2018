#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include <cctype>

using namespace std;

class MyClass{
public:
	MyClass(){
		cout << "orig construct : " << this << endl;
	}
	MyClass( MyClass& o ){
		cout << "capy construct : " << this << endl;
	}
	MyClass( MyClass&& o ){
		cout << "move construct : " << this << endl;
	}
	~MyClass(){
		cout << "distuct : " << this << endl;
	}
	void printAddress(){
		cout << "Address   : " << this << endl;
	}

	/*MyClass operator=( MyClass& o ){
		cout << "operator= & : ";
		o.printAddress();
		return o;
	}*/
private:

};


MyClass& newClass(){
	MyClass o;
	cout << "End newClass" << endl;
	return o;
}



int main( void ){
	
	MyClass o = newClass();

	o.printAddress();


	return 0;

}