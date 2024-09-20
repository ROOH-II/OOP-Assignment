#include <iostream>
#include "CharString.h"
using namespace std;

//substrings
CharString Substring(int n , int start=0){ 
    char* cstr;
    int Length = n-start + 1;
    char *temp=new char[Length];
    for(int i = 0; i< Length; i++){
        temp[i]=cstr[start + 1];
        if(i>Length){
            return temp;
        }
    }
    temp[Length]='\0';
    return temp;
}