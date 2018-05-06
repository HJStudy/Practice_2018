#include <iostream>
#include <string>

using namespace std;


int main( void ){

	const int size = 20;
	char str1[size];
	char str2[size];

	

	cout << "입력 1 : ";
	cin.getline( str1, size );

	cout << "입력 2 : ";
	cin.getline( str2, size );

	cout << "입력된 단어는 : "
		 << "'" << str1 << "', "
		 << "'" << str2 << "'"
		 << " 입니다."
		 << endl;






	return 0;

}