#include <iostream>
#include "CharString.h"
using namespace std;

//findSize

int CharString::findSize(const char* src){
    int i = 0;
    while(src[i]!= '\0')
    i++;
    return i;
}

//print

void CharString::print(){
    cout<<cstr<<endl;
}

//Reset

void CharString::Reset(){
    size = -1;
    cstr = nullptr;
}

//Cutdown

void CharString::Cutdown(int n){
    if(n>=0 && n<size){
        cstr[n]='\0';
        size = n;
    }
}


