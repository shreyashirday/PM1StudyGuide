//in this file, we will go over the very, VERY basic stuff

#include <iostream>

//this is the main function...hopefully you know by now that this where all the good stuff hapens
//the compiler looks for this method to execute
//I'll go over what a method/function is later
int main(int argc, char** argv){

  //let's go over the primitive types of C++

  //int specifies an integer, negative or positive, setting it equal to a non-integer automatically rounds it to lowest closest integer
  int a = 10;//set a = 10
  int i = 5; //set i = to 5
  int j = 3.97 //this makes j = to 3 ... NOT 4
  int k = -4 //ints can be negative too

  //you can add,subtract,multiply,divide these integers too
  int addition = a + i; //results in 15
  int subtraction = a - i; //results int 5
  int multiplcation = a * i; //results in 50
  int division = a / i; //results in 2

  //some other types:

  //a float is is used to represent a number that COULD be a non-integer
  //these can be added,subtracted, divided, and multiplied too!
  float pi = 3.14;
  float integerThatLooksLikeFloat = 2.0;
  float negative = -2.6;

  //unsigned int is a non-negative
  unsigned int = 6;

  //a char is used to represent a char
  char character = 'a'

  //a boolean can be either true or false
  bool on = true;
  bool isPEEfun = false;

  

  return 0;

}
