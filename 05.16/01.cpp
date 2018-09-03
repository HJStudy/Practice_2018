/*
	필드를 가진 인터페이스 둘을 다중상속한 파생클래스를
	인스턴트로가진 인터페이스 자료형의 변수의 인스턴트 안에
	다른 인터페이스의 필드도 있는가
	: 그렇다
*/

#include <iostream>
#include <combaseapi.h>


interface A{
public:
	int a;
	A(){};
	A( int a ) : a(a) {
		std::cout << "call interfece A construct" << std::endl;
	};
	virtual void printA() = 0;
	virtual void getThisAddress() = 0;
	//virtual operator AB *() = 0;
};

interface B{
public:
	int b;
	B(){};
	B( int b ) : b(b) {
		std::cout << "call interfece B construct" << std::endl;
	};
	virtual void printB() = 0;
	virtual void getThisAddress() = 0;
	//virtual operator AB *() = 0;
};

class AB : public A, public B{
private:
public:
	AB(){}
	AB( int a, int b ) : A(a), B(b) {
		std::cout << "call Class AB construct(int,int)" << std::endl;
	}
	~AB(){}
	void printA(){ std::cout << "printA : " << a << std::endl; }
	void printB(){ std::cout << "printB : " << b << std::endl; }
	void getThisAddress(){ std::cout << this << std::endl; }
	operator AB *(){
		std::cout << "operator AB::AB *" << this << std::endl;
		return this;
	}
};



int main( void ){

	A * a = new AB( 3, 5 );
	a->printA();

	AB * ab = (AB*) a;
	a->getThisAddress();			// 모두 같은 주소임
	ab->getThisAddress();


	B * b = (B*) a;
	b->getThisAddress();



	delete a;

	return 0;

}

