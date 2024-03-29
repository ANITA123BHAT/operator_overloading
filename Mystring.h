#ifndef _MYSTRING_H_
#define _MYSTRING_H_
class Mystring
{
    private:
        char *str;//pointer to char[]that holds c-style string
    public:
        Mystring();//no args constructor
        Mystring(const char *s);//overloaded constrcutor
        Mystring(const Mystring &source);//copy constructor
        ~Mystring();//destructor
        void display() const;
        int get_length()const ;//getters
        const char *get_str() const;

};
#endif//_MYSTRING_H
