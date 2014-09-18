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
int main(int argc, char* argv[]){
string input;
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
	for(int a=0; a<=26; a++){ // THis cycles through the 26 letters of the Aplhabet 
	if(input[a] > 65 &&  input[a] < 90){ // keeps it in the aplhabet
		for(int i =0; i<=length; i++){ // this cycles through the cipher
			if(input[i] == 39){
				input[i] = 38;
			} // end if
			if(input[i]== '.'){
				input[i] = 45;
			} // end if
			if(input[i] ==' '){
				input[i] = 64;
			} // end if
			if(input[i] == 'Z'){
				input[i] = 31;
			} // end if
			input[i]++;
		} // end for
	int g =0;
	if(input.find(" THE ")==-1){
	 	g += 1;
	} // end if
	if(input.find(" BE ")==-1){
		g +=1;
	}// end if
	if(input.find(" TO ")==-1){
	 	g += 1;
	} // end if
	if(input.find(" OF ")==-1){
		g +=1;
	}// end if
	if(input.find(" AND ")==-1){
	 	g += 1;
	} // end if
	if(input.find(" A ")==-1){
		g +=1;
	}// end if
	if(input.find(" IN ")==-1){
	 	g += 1;
	} // end if
	if(input.find(" THAT ")==-1){
		g +=1;
	}// end if
	if(input.find(" HAVE ")==-1){
	 	g += 1;
	} // end if
	if(input.find(" I ")==-1){
		g +=1;
	}// end if
	if(input.find(" IT ")==-1){
	 	g += 1;
	} // end if
	if(input.find(" FOR ")==-1){
		g +=1;
	}// end if
	if(input.find(" NOT ")==-1){
	 	g += 1;
	} // end if
	if(input.find(" ON ")==-1){
		g +=1;
	}// end if
	if(input.find(" WITH ")==-1){
	 	g += 1;
	} // end if
	if(input.find(" HE ")==-1){
		g +=1;
	}// end if
	if(input.find(" AS ")==-1){
	 	g += 1;
	} // end if
	if(input.find(" YOU ")==-1){
		g +=1;
	}// end if
	if(input.find(" DO ")==-1){
	 	g += 1;
	} // end if
	if(input.find(" AT ")==-1){
		g +=1;
	}// end if
//cout << g << "This is g" << endl;
	if(g < 18){
		cout << input << endl;
	} // end if	
	} // end for	
	}//end if

return 0;
}// end main
