#include <iostream>
#include <fstream>
#include "class.h"
using namespace std;
int main()
{
float ra,rb,k,sa;
ifstream inFile("file.in", ios::in);
ofstream outFile("file.out", ios::out);
inFile >>k>>ra>>rb;
outFile <<ra<<" "<<rb << endl;
lab2  ha;
ha.setRa(ra);
ha.setRb(rb);
ha.setK(k);	
 while(inFile >> sa){
	ha.haha(sa);
	outFile <<ha.getRa()<< " " <<ha.getRb() << endl;
}
 
return 0; 
}
