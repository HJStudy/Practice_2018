/*
	Q5. 3���� field�� ������ ����ü�� �ۼ��ϰ� �־��� ����� �ʱ�ȭ �ϰ� ����϶�
	Q6. Q5�� ����ü�� �迭�� ����� �������� field�� ä��� ����϶�.
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
		 << "===== ��� =====" << endl;
	cout << "name : " << snack.name << endl
		 << "mass : " << snack.mass << endl
		 << "cal  : " << snack.cal << endl;
	*/

	CandyBar snacks[3] = {
				{ "Mocha Munch", 2.3, 350 }
			};
	
	cout << "< Q6 >" << endl
		 << "===== ��� =====" << endl;
	cout << "name : " << snacks[0].name << endl
		 << "mass : " << snacks[0].mass << endl
		 << "cal  : " << snacks[0].cal << endl;

	return 0;
	
}