#include "res.h"
#include "res.c"
#include <fsrteam>
int main(){
	string line;
	ifstream inputs("/c/Users/Nik/povalyaev/inputs.txt", ios::in);
	ofstream results;
	results.open("/c/Users/Nik/povalyaev/results.txt", ios::app);
	if (inputs.is_open()){
		while (getline(inputs, line)){
			c=placheck(line);
			results<<line<<c<<std::endl;

		}
	}
	inputs.close() 
	results.close();
