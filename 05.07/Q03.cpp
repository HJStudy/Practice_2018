/*
	Q3. ��, �̸��� �����ϴ� char�迭�� ����� ���ο� char�迭�� 
		cstring ��� ������ �̿��� �� �迭�� ���϶�
	Q4. Q3�� string�� ����ؼ� ó���϶�
*/
#include <iostream>
#include <string>

using namespace std;


//Q3
/*
int main( void ){

	char fName[30];
	char lName[30];
	char fullName[60];

	cout << "�̸� : "; cin.getline( lName, 30 );
	cout << "�� : ";  cin.getline( fName, 30 );
	
	strcat( fName, ", "  );		// 1. ���� �ڿ� ", " �� �ٿ���
	strcpy( fullName, fName );	// 2. Ǯ���ӿ� ���� ����
	strcat( fullName, lName );	// 3. Ǯ���ӿ� �̸��� ���̱�

	cout << "��� : " << fullName << endl;

	return 0;

}
*/

int main( void ){

	string fName;
	string lName;
	string fullName;
	
	cout << "<Q4>" << endl;
	cout << "�̸� : "; getline( cin, lName);
	cout << "�� : ";   getline( cin, fName);
	
	fullName.append( fName ).append( ", " ).append( lName );

	cout << "��� : " << fullName << endl;

	return 0;

}