/*
	Q10. �޸��� ��� 3���� �޴� array ��ü�� ����� 
		 �����͸� �޾� �� �հ� ����� ����϶�
*/
#include <iostream>
#include <array>

using namespace std;


int main( void ){
	
	int sum = 0;
	int avg = 0;
	array<int, 3> runDatas;

	cout << "< Q10 >" << endl
		 << "===== �Է� =====" << endl;

	cout << "1��° ��� �Է� : "; cin >> runDatas[0];
	cout << "2��° ��� �Է� : "; cin >> runDatas[1];
	cout << "3��° ��� �Է� : "; cin >> runDatas[2];
	
	// ��, ��� ���
	for( int &i : runDatas ) 
		sum += i;
	avg = sum/runDatas.size();


	cout << "===== ��� =====" << endl;
	cout << "��   : " << sum << endl
		 << "��� : " << avg << endl;

	return 0;

}