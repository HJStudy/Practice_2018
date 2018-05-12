/*
	Q5. 3개의 field를 가지는 구조체를 작성하고 주어진 멤버로 초기화 하고 출력하라
	Q6. Q5의 구조체를 배열로 만들고 각원소의 field를 채운뒤 출력하라.
*/
#include <iostream>
#include <string>

using namespace std;


struct CandyBar{
	string name;
	double mass;
	int cal;
};


int main( void ){

	/*
	CandyBar snack = { "Mocha Munch", 2.3, 350 };

	cout << "< Q5 >" << endl
		 << "===== 출력 =====" << endl;
	cout << "name : " << snack.name << endl
		 << "mass : " << snack.mass << endl
		 << "cal  : " << snack.cal << endl;
	*/

	CandyBar snacks[3] = {
				{ "Mocha Munch", 2.3, 350 }
			};
	
	cout << "< Q6 >" << endl
		 << "===== 출력 =====" << endl;
	cout << "name : " << snacks[0].name << endl
		 << "mass : " << snacks[0].mass << endl
		 << "cal  : " << snacks[0].cal << endl;

	return 0;
	
}