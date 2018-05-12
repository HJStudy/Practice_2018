/*
	Q3. 성, 이름을 저장하는 char배열을 만들고 새로운 char배열에 
		cstring 헤더 파일을 이용해 두 배열을 합하라
	Q4. Q3을 string을 사용해서 처리하라
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

	cout << "이름 : "; cin.getline( lName, 30 );
	cout << "성 : ";  cin.getline( fName, 30 );
	
	strcat( fName, ", "  );		// 1. 성의 뒤에 ", " 를 붙여줌
	strcpy( fullName, fName );	// 2. 풀네임에 성을 복사
	strcat( fullName, lName );	// 3. 풀네임에 이름을 붙이기

	cout << "출력 : " << fullName << endl;

	return 0;

}
*/

int main( void ){

	string fName;
	string lName;
	string fullName;
	
	cout << "<Q4>" << endl;
	cout << "이름 : "; getline( cin, lName);
	cout << "성 : ";   getline( cin, fName);
	
	fullName.append( fName ).append( ", " ).append( lName );

	cout << "출력 : " << fullName << endl;

	return 0;

}