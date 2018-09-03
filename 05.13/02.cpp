/*
	추상클래스의 순수가상함수를 파생클래스가 반드시 구현해야 하는가
	: 그렇다
*/
#include <iostream>
#include <combaseapi.h>



interface Test_inter{
	virtual void printi() = 0;
};

class Test_class : public Test_inter{
private:
public:
	Test_class() {}
	~Test_class(){}
	void print(){ std::cout << "Test_class::print" << std::endl;}
	void printi(){ std::cout << "Test_class::printi" << std::endl;}
};



using namespace std;

int main( void ){

	Test_class * tO = new Test_class();

	tO->print();
	tO->printi();


	Test_inter * tI = tO;

	tI->printi();

	delete tO;

	return 0;

}