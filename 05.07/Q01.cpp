/*
	4-1. �Է°� ������ϴ� �ܼ����α׷��� �ۼ�
	4-2. char�迭�� string���� ����
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

	cout << "���� �̸� : "; cin.getline( firstName,30 );
	cout << "���� �� : ";  cin.getline( lastName, 30 );
	cout << "�л��� ���ϴ� ���� : "; cin.get( grade );
	cout << "���� : "; cin >> age;

	cout << endl << "======== �Էµ� ���� ========" << endl ;
	cout << "���� : " << lastName << ", " << firstName << endl;
	cout << "���� : " << (char)(grade+1) << endl;
	cout << "���� : " << age << endl;
	

	return 0;

}
*/

// Q2
int main( void ){

	string firstName;
	string lastName;
	char grade;
	int age;

	cout << "���� �̸� : "; getline( cin, firstName );
	cout << "���� �� : ";  getline( cin, lastName );
	cout << "�л��� ���ϴ� ���� : "; cin.get( grade );
	cout << "���� : "; cin >> age;
		    
	cout << endl    <<"======== �Էµ� ���� ========" << endl;
	cout << "���� : " << lastName << ", " << firstName << endl;
	cout << "���� : " << (char) ( grade+1 ) <<endl;
	cout << "���� : " << age <<endl;


	return 0;

}