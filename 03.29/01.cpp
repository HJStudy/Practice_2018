/*
*  연산자 오버로딩
*/
#include <iostream>

using namespace std;


class Test01_1{
private:
	int a;
	static double PI;
public:
	Test01_1() : a(0) {}
	Test01_1( double t) : a( (t>0.0) ? 1 : 0 ) {}
	Test01_1( int a ) : a(a) {}
	~Test01_1(){
		//cout << this << " 위치의 객체 소멸" << endl;
	}

	int getA(){ return a; }

	Test01_1 operator+( const Test01_1 o ){
		a += o.a;
		return * this;
	}
	Test01_1 operator+=( const Test01_1 o ){
		a += o.a;
		return *this;
	}
	Test01_1 operator=( const Test01_1 * o ) const{
		//Test01_1 t( *this );
		return *o;
	}
	friend Test01_1 operator+( const int a, const Test01_1 o );
	friend Test01_1& operator-( Test01_1 &, const Test01_1 & );
	/*Test01_1 * operator+( const Test01_1 o, const Test01_1 p ){
		return new Test01_1();
	}*/
};

Test01_1 operator+( const int a, Test01_1 o){
	o.a += a;
	return o;
}

Test01_1& operator-( Test01_1 &p, const Test01_1 &o){
	p.a -= o.a;
	return p;
}




int main( void ){

	Test01_1 t1 = Test01_1(3);
	Test01_1 t2 = Test01_1(5);
	Test01_1 t3;

	t3 = t1;

	cout << "t1의 주소 : " << &t1 << endl;
	cout << "t3의 주소 : " << &t3 << endl;




	cout << t1.getA() << endl;

	t1 = t1;					// t1.operator=( t1 );
	t1 = t1 + t2;				// t1.operator=( t1.operator+(t2) );
	cout << t1.getA() << endl;
	
	t1 += t2;					// t1.operator+=( t2 );
	cout << t1.getA() << endl;



	cout << "End" << endl;

	return 0;

}