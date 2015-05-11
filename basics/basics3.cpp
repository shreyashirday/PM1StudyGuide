
//in this file we will go over loops and arrays and some other small stuff

#include <iostream>
#include <vector>


int main(int argc, char** argv){

  //let's say we are taking in an input, but we want a number only
  //first we take it as a string
  std::string input;
  std::cout << "Please enter a number\n";
  std::cin >> input;

  //then we use a magic (not really) function conver it into a number called stoi
  //this was just introduced in C++11 so you HAVE to compile it with the -std=c++11 flag
  //its easy to use
  int number = std::stoi(input);

  //now we have a number!

  //lets go over loops: there's two main types

  //first, let's go over while loops
  //basically while loops mean that "while something is happening do this"
  //let's use our input
  //first lets create a variable to test against the input
  int test = 1;

  //then we do the loop!
  while (test < number + 1){

    std::cout << "I am " << test << " years old\n";

    //if we don't add this next like, this loop will go on forever and your computer will literally explode
    //ok not really, but it could be annoying
    //so let's add this
    test++; //a.k.a test += 1 a.k.a test = test + 1;

  }

  //now let's do for loops
  //there's three parts to this
  //the test variable is before the first semicolon, the condition before the second semicolon, and the variable change is the third paramater
  //note you can use any type of variable that makes sense, you can add by 2, 5, 10, you decrement, you add more conditional stuff or different conditional stuff
  for(int i = 0; i < number;i++){

    //easy!
    std::cout << "I am " << i + 1 << " years old\n";

  }

  //time for arrays
  //so as Bernie mentioned in lecture there's two types ways to declare arrays: the C-style and the modern style
  //the C-style is simple: we just do <type>* variableName = new <type>[N], where N is the size of the array
  //examples:

  //array of 10 booleans
  bool* booleans = new bool[10];
  //here's the catch, this is taking memory from the OS so we have to return it otherwise we get memory leaks
  //its easy
  delete[] booleans;

  //here's the modern way:
  //using vectors! std::vector<type> variabeName;
  std::vector<int> numbers;
  //can initalize too
  std::vector<int> numbersTwo(15); //vector with 15 0's
  std::vector<int> numbersThree(15,10); //vector with 15 10's
  std::vector<int> numbersFour = {3,6,7,8}; //vector containing 3,6,7,8

  //clear vectors
  numbersFour.clear();
  //add numbers to vectors
  numbersFour.push_back(13);
  numbersFour.push_back(7);
  numbersFour.push_back(17);

  //get size
  int sizeOfVector = numbersFour.size();

  //using loops....
  //arrays in C++ (and pretty much any important language) are 0-based, meaning the first number is at index 0
  for(int i = 0;i < sizeOfVector;i++){

    std::cout << numbersFour[i] << std::endl;

  }


  return 0;


}
