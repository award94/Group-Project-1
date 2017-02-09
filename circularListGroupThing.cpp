#include <iostream>
#include <fstream>
#include <string>
#include "cList.h"

using namespace std;

int main(int argc, char*argv[]){
	ifstream inFile;	
	inFile.open("input.txt");
	
	string line;
	getline(inFile, line);
	
	cList term1(line);	
	term1.print();
	cList term2;
	term2.print();
	
	return 0;	
} 
