#include <iostream>
#include <string>

using namespace std;


int main( void ){

	const int size = 20;
	char str1[size];
	char str2[size];

	

	cout << "�Է� 1 : ";
	cin.getline( str1, size );

	cout << "�Է� 2 : ";
	cin.getline( str2, size );

	cout << "�Էµ� �ܾ�� : "
		 << "'" << str1 << "', "
		 << "'" << str2 << "'"
		 << " �Դϴ�."
		 << endl;






	return 0;

}