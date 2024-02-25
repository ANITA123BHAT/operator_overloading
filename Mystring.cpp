#include<cstring>
#include<iostream>
#include "Mystring.h"
//no argument costructor
Mystring::Mystring():str{nullptr}{
    str=new char[1];
    *str='\0';
}

//overloaded constructor
/*
in this Mystring a{"HELLO"};
parametrized ocnstructor is called and checks that
passed string is bychance nullptr if yes it just allocate the memory in the heap
if not else{}//in that str attribures of class that object a is pointing to andfor that allocate the meory in the 
heap with length(hello)+1  extra for '\0'
copy that means juts str is pointing tje memeory of s whci contains an 'hello\0' 
bcz *s is const and so we created seperate memory str and str points to s memory

*/

/*
//copy constructor FLOW;
oi got Mystring a {"hello"};
Mystring b{a};
now i got copy constructor
now inside the definitionof copy constructor
this refering to the object what i have to copy 'b'
and source is 'a' object 

this-> pointer  is got str bcz it;s attributes;
i wnat to do deep copy so i have to cretae a new memory for that another object 
so str=new char[std::strlen(source.str)+1]; on heap
after that strcpy(str,source.str); //deep copy

*/
Mystring::Mystring(const char *s):str{nullptr}{
    if(s==nullptr){
        str=new char[1];
        *str='\0';
    }
    else{
        str=new char [std::strlen(s)+1];
        std::strcpy(str,s);
    }
} 

//copy constructor
Mystring::Mystring(const Mystring &source):str{nullptr}{
    str=new char [std::strlen(source.str)+1];
    std::strcpy(str,source.str);
}

//detsructor
Mystring::~Mystring(){
    delete [] str;//character array 
}

void Mystring::display()const{
    std::cout<<str<<":"<<get_length()<<std::endl;
}
//length getter
int Mystring::get_length() const {
    return std::strlen(str);
}

//string getter
const char *Mystring::get_str() const {
    return str;
}


