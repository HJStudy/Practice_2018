/*
	4-1. 입력과 출력을하는 콘솔프로그램의 작성
	4-2. char배열을 string으로 수정
*/

#include <iostream>
#include <string>

using namespace std;

// Q1
/*
int main( void ){
	
	char firstName[30];
	char lastName[30];
	char grade;
	int age;

	cout << "영문 이름 : "; cin.getline( firstName,30 );
	cout << "영문 성 : ";  cin.getline( lastName, 30 );
	cout << "학생이 원하는 학점 : "; cin.get( grade );
	cout << "나이 : "; cin >> age;

	cout << endl << "======== 입력된 정보 ========" << endl ;
	cout << "성명 : " << lastName << ", " << firstName << endl;
	cout << "학점 : " << (char)(grade+1) << endl;
	cout << "나이 : " << age << endl;
	

	return 0;

}
*/

// Q2
int main( void ){

	string firstName;
	string lastName;
	char grade;
	int age;

	cout << "영문 이름 : "; getline( cin, firstName );
	cout << "영문 성 : ";  getline( cin, lastName );
	cout << "학생이 원하는 학점 : "; cin.get( grade );
	cout << "나이 : "; cin >> age;
		    
	cout << endl    <<"======== 입력된 정보 ========" << endl;
	cout << "성명 : " << lastName << ", " << firstName << endl;
	cout << "학점 : " << (char) ( grade+1 ) <<endl;
	cout << "나이 : " << age <<endl;


	return 0;

}