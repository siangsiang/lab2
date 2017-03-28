#include "class.h"
#include <cmath>
#include <iostream>
using namespace std;
void lab2::setRa(float a){
	Ra = a;
}
void lab2::setRb(float b){
	Rb = b;
}
void lab2::setK(float c){
	K = c;
}
float lab2::getRa(){
return Ra;
}
float lab2::getRb(){
return Rb;
}
float lab2::getK(){
return K;
}
float lab2::haha(float sa){
	float sb,ea,eb;
	sb=1-sa;
        ea=1/(1+ pow(10,((getRb()-getRa())/400.0)));
        eb=1/(1+ pow(10,((getRa()-getRb())/400.0)));
        setRa(getRa()+getK()*(sa-ea));
        setRb(getRb()+getK()*(sb-eb));
        setRa(roundf(getRa()));
        setRb(roundf(getRb()));
}


