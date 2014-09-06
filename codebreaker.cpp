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
string cript;
int length;
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
	getline(file,cript);
	length=cript.length();
	for(int count=0;count < length; count++){
		if (isalpha(cript[count])){
		
		}
	cout << "file checks out" << endl;
	}
	cout << cript << endl;

return 0;
}// end main
