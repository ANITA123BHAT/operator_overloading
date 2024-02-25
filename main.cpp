/*

What is operator overlaoding?
using traditional operator such as +,-,=,* etc, with user defined type
->allows user defined types to behave similar to built in type
-> can make code more readable and writable
->not done auatomatically(except for the assignment operator)
they must be explicitly defined

using fucntion:
Number result=multiply(add(a,b),divide(c,d));
Using member method:
Number result=(a.add(b)).multiply(c.divide(d));

::, conditional :? , . and * , .*, sizeof() can 't be overloaded

Basic Rules for operator overloading:
->precedence and associativity can not be changes
->'arity', cannot be changed (i.e can't make the division operator unary)
-> can't overload operator for primitive type (int ,double , etc)
->can't create new operator
[], (),-> and assignment operator (=) must be declared as memebr methods
other operator can be dclared as member methods or global function

*/

#include<iostream>
#include "Mystring.h"

int main(){
    
    Mystring empty;//no args constructor
    Mystring larry("Larry");//overloaded constructor
    Mystring stooge{larry};//copy constructor

    empty.display();
    larry.display();
    stooge.display();
    return 0;

}