/*
	Q10. 달리기 기록 3개를 받는 array 객체를 만들고 
		 데이터를 받아 그 합과 평균을 출력하라
*/
#include <iostream>
#include <array>

using namespace std;


int main( void ){
	
	int sum = 0;
	int avg = 0;
	array<int, 3> runDatas;

	cout << "< Q10 >" << endl
		 << "===== 입력 =====" << endl;

	cout << "1번째 기록 입력 : "; cin >> runDatas[0];
	cout << "2번째 기록 입력 : "; cin >> runDatas[1];
	cout << "3번째 기록 입력 : "; cin >> runDatas[2];
	
	// 합, 평균 계산
	for( int &i : runDatas ) 
		sum += i;
	avg = sum/runDatas.size();


	cout << "===== 출력 =====" << endl;
	cout << "합   : " << sum << endl
		 << "평균 : " << avg << endl;

	return 0;

}