#include <stdio.h>



int main( void ){


	const char * str = "ABC";
	str = "DEF";

	int a = 1;
	int * pa = &a;

	int arr[12] = {1};

	for( int i=0; i<12; i++ )
		printf( "%d\n", arr[i] );


	return 0;

}