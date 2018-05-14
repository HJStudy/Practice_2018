#include <iostream>

using namespace std;


int main( void ){

	int check;

	cout << "입력하시오 : ";
	for( cin>>check; check!=0; cin>>check ){
		cout << check << std::endl;
		cout << "입력하시오 : ";
	}


	int x;

	cout<<( x = 100 )<<endl;


	return 0;

}