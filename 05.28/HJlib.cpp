/*
	1. 콘솔의 간단한 출력 매크로 정의
	2. 파일 입출력 스트림 관리 객체
*/
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

// 1. 콘솔 매크로
#define consolePrint(x) std::cout << x
#define consolePrintln(x) std::cout << x << std::endl
#define consoleln std::cout << std::endl


namespace HJ{

	using std::vector;
	using std::string;
	using std::ofstream;


	// 2.파일 입출력 스트림 관리 객체
	class oFstreamManger{
	private:
		
		static vector<string> linkedFilenamelist;
		ofstream oFstream;

		oFstreamManger( const string str ) : oFstream(str){}

	public:


		~oFstreamManger(){ if( oFstream.is_open() ) oFstream.close(); }
		
		ofstream & getStream(){ 
			return oFstream; 
		}

		static oFstreamManger * newInstance( const char * newFilename, bool log=false ){

			for( string &fileName : linkedFilenamelist ){
				if( fileName==newFilename ){
					if( log ) consolePrintln( "errer : already linked file" );
					return nullptr;
				}
			}

			linkedFilenamelist.push_back( newFilename );
			if( log ) consolePrintln( "stream is create" );
			return new oFstreamManger( newFilename );

		}

	};
	vector<string> oFstreamManger::linkedFilenamelist;



}
