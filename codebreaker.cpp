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
string input;
string fileChange;
int length;
int count = 0;
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
	cout << input << endl;
	length=input.length();
	for(count= 0; count < length; count++){
		for(int i=0; i < 1; i++){
			if(input[count] == 'Z'){
				input[count] = ' ';
			}
			else 
				input[count]++;
			
		}
	}
	cout << "this is the new code " << input << endl;
return 0;
}// end main
