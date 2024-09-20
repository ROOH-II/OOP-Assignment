#ifndef CHAR_STRING_H
#define CHAR_STRING_H
class CharString 
{
private:
   char* cstr; 
   int size;
public: 
   //default constructor
   CharString( );

   //parameterized constructor
   CharString(const char* src); 
   CharString(const char* src, int n);

   //copy constructor
    CharString(const CharString& src);
    CharString(const CharString& src, int n);
    
    //copy Operations
    void CopyFrom(const char* src);
    void CopyFrom(const char* src, int n, int start=0);
    void CopyFrom(const CharString& src);
    void CopyFrom(const CharString& src, int n, int start=0);

    //substrings
    CharString Substring(int n , int start=0) const;
    int FindSubstring(const char* str, int start=0) const; 
    int FindSubstring(const CharString* str, int start=0) const;  

    //Concatenation Operations
    void Concat ( const char* str ); 

    //Other Operations
   void print();
    int findSize(const char* src);
    int GetSize( ) ;
    void Reset( );
    void Cutdown(int n);
};

#endif