/*
	1. �ܼ��� ������ ��� ��ũ�� ����
	2. ���� ����� ��Ʈ�� ���� ��ü
*/
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

// 1. �ܼ� ��ũ��
#define consolePrint(x) std::cout << x
#define consolePrintln(x) std::cout << x << std::endl
#define consoleln std::cout << std::endl


namespace HJ{

	using std::vector;
	using std::string;
	using std::ofstream;


	// 2.���� ����� ��Ʈ�� ���� ��ü
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
