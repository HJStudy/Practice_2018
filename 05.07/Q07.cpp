/*
	Q7. ����ȸ���� ������ �Է¹ް� ����϶� 
		cin, cout��ü�� ����� ��
	Q8. �������� new�� ����� �����Ҵ����� ó���� ��
	Q9. (����)
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
		 << "===== �Է� =====" << endl;
	
	cout << "ȸ�� �̸� : "; cin.getline( data01.companyName, 30 );
	cout << "���� ���� : "; cin >> data01.diameter;
	cout << "���� �߷� : "; cin >> data01.mass;

	cout << "===== ��� =====" << endl;
	cout << "ȸ�� �̸� : " << data01.companyName << endl;
	cout << "���� ���� : " << data01.diameter << endl;
	cout << "���� �߷� : " << data01.mass << endl;
	*/

	PizzaData * data01 = new PizzaData;

	cout << "< Q7 >" << endl
		 << "===== �Է� =====" << endl;
	
	cout << "ȸ�� �̸� : "; cin.getline( data01->companyName, 30 );
	cout << "���� ���� : "; cin >> data01->diameter;
	cout << "���� �߷� : "; cin >> data01->mass;

	cout << "===== ��� =====" << endl;
	cout << "ȸ�� �̸� : " << data01->companyName << endl;
	cout << "���� ���� : " << data01->diameter << endl;
	cout << "���� �߷� : " << data01->mass << endl;
	
	delete data01;

	return 0;

}