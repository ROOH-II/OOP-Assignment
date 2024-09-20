#include <iostream>
#include "CharString.h"
using namespace std;
void CharString:: Concat ( const char* str ) {
    int sizeofCstr= findSize(cstr);
    int sizeofStr=findSize(str);
    int Len = sizeofCstr + sizeofStr;
    char *temp = new char[Len];
    for(int i = 0; i < sizeofCstr; i++){
        temp[i]=cstr[i];
    }
    for(int j = 0; j < Len; j++){
        int i = 0;
        temp[i]=str[j];
        i++;
    }
    temp[Len] = '\0';
    CopyFrom(temp);
}
