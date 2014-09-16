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
#include <cmath>
#include <cstring>
#include <string>

using namespace std;
bool checkWords(string);


int main(int argc, char* argv[]){
string input;
//string fileChange;
int length;
int count = 0;
string dictionary[20] ={ "A", "THE", "BE", "TO", "OF", "AND", "THAT", "IN", "I", "IT", "FOR" , "NOT", "ON", "WITH", "HE", "AS", "YOU", "DO", "AT"};
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
	length=input.length();
cout << input << " This is before it is messed with " << endl;
	
	for(int a=0; a<=26; a++){
	if(isalpha(input[a])){	
		for(int i =0; i<=length; i++){
			cout << "This is what i is " << i << " " << input <<  endl;
			if(input[i] ==' '){
				input[i] = 'A';
			cout << "This is where the space gets Changed to an A!!! " << input << endl;
			}
			if(input[i] == 'Z'){
				input[i] = 31;
			}
			input[i]++;
		}
	}
	if(checkWords(input) == true){
		cout << input << endl;
	}
	cout << input << endl;
	}	
	
return 0;
}// end main

//function to check the letters
bool checkWords(string cript){
int g = 0;
if(g <=2){
	if(cript== " A "){
		g=g+1;
	}
	if(cript == " THE "){
		g=g+1;
	}
	if(cript == " BE "){
		g=g+1;
	}
	if(cript == " TO "){
		g=g+1;
	}
	if(cript == " OF "){
		g=g+1;
	}
	if(cript == " AND "){
		g=g+1;
	}
	if(cript == " IN "){
		g=g+1;
	}
	if(cript == " THAT "){
		g=g+1;
	}
	if(cript == " I "){
		g=g+1;
	}
	if(cript == " IT "){
		g=g+1;
	}
	if(cript == " FOR "){
		g=g+1;
	}
	if(cript == " NOT "){
		g=g+1;
	}
	if(cript == " ON "){
		g=g+1;
	}
	if(cript == " WITH "){
		g=g+1;
	}
	if(cript == " HE "){
		g=g+1;
	}
	if(cript == " AS "){
		g=g+1;
	}
	if(cript == " YOU "){
		g=g+1;
	}
	if(cript == " DO "){
		g=g+1;
	}
	if(cript == " AT "){
		g=g+1;
	}
}
else return false;
}
