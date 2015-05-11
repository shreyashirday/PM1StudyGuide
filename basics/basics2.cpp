//welcome back!
//in this file, we will go over some fun stuff like methods/functions, control flow, reading/writing input, and strings!

#include <iostream> //inorder to read/write input, we need to include "iostream". What does this mean? #include includes the library or file that you name to be used in this file. That means we are using the iostream library provided by C++
#include <string> //we want to use strings so lets use that

//ignore until you see this method called in the main method!!!
//ok so remember the method header stucture: 1. return type 2.method name 3.parentheses with parameters inside (can be empty) 4.block "{}" with code inside
//here we do not want to return anything so we make the return type void, the name is obvious, the parameters are the username and password the user will enter, they CAN be the same as the variable names, but they don't have to be
void checkIfUserIsValid(std::string u,std::string p){

  //remember booleans? well we're gonna use them again
  //the == is an equality operator you can check if two objects of the same type are equal using ==
  //likewise, you can check if they are not equal using != or less than using < or greater than using > or less than/equal to using <= and the opposite using >=
  bool userNameValid = (u == "Programmer123");
  bool passWordValid = (p == "ProgrammingRocks");

  //next up is logical parameters
  //&& or "and" means if both arguments are true then its true, otherwise it return false
  // || or "or" means if  at least one of the arguments is true then its true, otherwise its false

  //we use if statments to decide what to do if something is true or false
  //here we want usernameValid and passwordValid to be true, otherwise they are not a valid user
  if(userNameValid and passWordValid){
    std::cout << "Welcome!\n";
  }
  //if either is false, then we reject them
  else{
    std::cout << "Invalid login credentials!\n";
  }



}

//so here's our main method
int main(int argc, char** argv){

  /*okay, so what does argc and argv mean???
  WELL, if you're running your program through a command line/terminal, argc is gonna be the number of arguments and argv is gonna be the actual arguments
  so let's say I compile a program like this: g++ -std=c++11 basics2.cpp -o basics 2 and the I run it like this: ./basics2 yes no swag diddly do
  argc will be 6. Why 6? The program counts the "./basics2" as an argument. Now, if you wanted to access an argument, let's say "no", you would get it through "argv[2]"
  This brings up arrays and pointers, but I'll cover that later
  */


  //so let's go over strings...what is a string?
  //a string is just a bunch of characters put together
  //it's declared just like any other type but we have to use to "std" namespcae since it's not a primitive type (for all you fancy folks, yes you can do "using std::string" or "using namespace std" at the top of this file if you want to avoid this)
  //we are not initializing the variables, because we are going write into them later
  std::string username;
  std::string password;

  //so let's ask the user for input
  //first we have to show them text telling them what to do
  //this is what std:cout is used for
  //seperate each string or variable with the << operator
  std::cout << "Please enter your username \n"; //remember:  \n means new line
  //read the string from the user, we use std::cin for this. easy enough to remember right? cOUT for printing and cIN for reading. Also we use >> instead of << for std::cin
  std::cin >> username;

  //let's do the same for the password
  std::cout << "Please enter your password \n";
  std::cin >> password;

  //do the authentication
  checkIfUserIsValid(username,password);

  return 0;

}
