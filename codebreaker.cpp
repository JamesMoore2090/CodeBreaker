/* 
James Moore
CPSC 230
codebreaker.cpp
Sept 5 2014
Dr. Davies
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(int argc, char* argv[]){
char input;
	if(argc!=2){
		cout << "Usage: codebreaker [codebreakerTemplateFile]." << endl;
		return 1;
	}//end if
	// open file
	ifstream file(argv[1]);
	if(!file){
		cout << "Could NOT open ciphertext " << argv[1] << "!" << endl;
		return 2;
	}// end if
	getline(file, input);
return 0;
}// end main
