#include <iostream>
#include "CharString.h"
using namespace std;

//copyForm

void CharString::CopyFrom(const char *src){
    size= findSize(src);
    cstr = new  char[size+1];
    for(int i = 0; i <= size; i++){
        cstr[i] = src[i];
    }
    cstr[size + 1]='\0';

}
