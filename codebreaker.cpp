/* 
James Moore
CPSC 230
codebreaker.cpp
Sept 16 2014
Dr. Davies
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <string>

using namespace std;
bool checkWords(string, int);


int main(int argc, char* argv[]){
string input;
//string fileChange;
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
	getline(file, input); // gets the string
	length=input.length(); // gets the length of the string
	for(int a=0; a<=26; a++){
		for(int i =0; i<=length; i++){
			if(input[i] ==' '){
				input[i] = 64;
			} // end if
			if(input[i] == 'Z'){
				input[i] = 31;
			} // end if
			input[i]++;
		} // end for
	if(checkWords(input, length) == true){
		cout << input << endl;
	}// end for
//	cout << input << endl;
//	if(checkWords(input) == true){
//		cout << input << endl;	
	}
//	else cout << "Your file has not been decrypted." << endl;
		
	
return 0;
}// end main

//function to check the letters
bool checkWords(string cript, int len){
	int count = 0;
	string dictionary[20] = { "THE", "BE", "TO", "OF", "AND", "A", "IN", "THAT", "I", "IT", "FOR", "NOT", "ON", "WITH", "HE", "AS", "YOU", "DO", "AT"};

	for(int d = 0; d <= 20; d++){
		for(int l = 0; l <=len; l++){
	//		for(int n = 0; n <=len; n++){
				dictionary[d]==cript[l];
				count++;
	//		}
			}	
		}
	
	if(count >=2){
		return true;
	}
	else return false;
}
