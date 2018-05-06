#include <iostream>
#include <string>

using namespace std;


class Test01{
public:
	explicit Test01() : a(0){}
	Test01( int a ) : a(a) {
		cout << this << endl;
	}
	~Test01(){
		cout << this << "는 빡빡이다" << endl;
	}

	Test01 * getThis(){ return this; }
	int getA(){ return a; }

	Test01 * operator+( Test01 o ){
		this->a += o.a;
		return this;
	}

	explicit operator int() const{
		return a;
	}

private:
	int a;
};



int main1( void ){

	Test01 t1(3);
	Test01 t2(t1);									// 기본 복사 생성자 호출


	int a = (int) t1;

	cout << t1.getThis() << " " << t1.getA() << endl;
	cout << t2.getThis() << " " << t2.getA() << endl;
			  
	t2 = t1;  
			  
	cout << t1.getThis() << " " << t1.getA() << endl;
	cout << t2.getThis() << " " << t2.getA() << endl;

	int &ra = a;

	cout << (ra==a) << endl;

	

	return 0;

}