#include <iostream>
#include "CharString.h"
using namespace std;
 
 //Default constructor
CharString::CharString(){
    size = -1;
    const char* cstr = "";
}

//parameterized constructor
CharString::CharString(const char* src){
    int sizeofsrc=0;
    while (src[sizeofsrc]!='\0'){
        size++;
    }
    for( int i = 0; i<= sizeofsrc; i++){
        cstr[i]=src[i];
    }
    cstr[sizeofsrc]='\0';
    size= sizeofsrc;
}
CharString::CharString(const char* src, int n){
    size = n;
    for(int i=0;i<=n;i++){
        cstr[i]=src[i];
    }
    cstr[n+1]='\0';
}





