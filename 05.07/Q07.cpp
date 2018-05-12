/*
	Q7. 피자회사의 정보를 입력받고 출력하라 
		cin, cout객체를 사용할 것
	Q8. 위문제를 new를 사용한 동적할당으로 처리할 것
	Q9. (생략)
*/
#include <iostream>
//#include <string>

using namespace std;

struct PizzaData{
	char companyName[30];
	int diameter;
	double mass;
};

int main( void ){

	/*
	PizzaData data01;

	cout << "< Q7 >" << endl
		 << "===== 입력 =====" << endl;
	
	cout << "회사 이름 : "; cin.getline( data01.companyName, 30 );
	cout << "피자 지름 : "; cin >> data01.diameter;
	cout << "피자 중량 : "; cin >> data01.mass;

	cout << "===== 출력 =====" << endl;
	cout << "회사 이름 : " << data01.companyName << endl;
	cout << "피자 지름 : " << data01.diameter << endl;
	cout << "피자 중량 : " << data01.mass << endl;
	*/

	PizzaData * data01 = new PizzaData;

	cout << "< Q7 >" << endl
		 << "===== 입력 =====" << endl;
	
	cout << "회사 이름 : "; cin.getline( data01->companyName, 30 );
	cout << "피자 지름 : "; cin >> data01->diameter;
	cout << "피자 중량 : "; cin >> data01->mass;

	cout << "===== 출력 =====" << endl;
	cout << "회사 이름 : " << data01->companyName << endl;
	cout << "피자 지름 : " << data01->diameter << endl;
	cout << "피자 중량 : " << data01->mass << endl;
	
	delete data01;

	return 0;

}