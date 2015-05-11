//in this file, we will go over pointers and references and recursion
#include <iostream>

//don't look at this until you are told to
int passByPointer(int* value){

  //get DATA at value (which is an address) and do stuff with it
  *value = (*value) * 3;

  //return the data
  return *value;

}

//don't look at this until you are told too
int passByReference(int& value){

  value = value * 3;

  return value;

}

//don't look at this until you are told too
int recursiveFibonacci(int n){
  //if n is 0 or 1 return its value; this is the terminating value
  if(n == 0 or n == 1){
    return n;
  }else{
    //otherwise, add the recursive of number before and the number 2 numbers before it
    return recursiveFibonacci(n - 1) + recursiveFibonacci(n - 2);
  }

}

int main(int agrc, char** argv){

  //let's start off with pointers
  //a pointer is a memory address which is a number
  //the memory address is the address of the data, so its like instead of carrying around all your cash with you, you just carry around a debit card which just has information about your bank account where your cash is stored
  //I already went over how pointers can be used to create arrays so let's skip that
  //remember that if a is an array, *(a + 5) is the same as a[5]

  //okay let's we want to use pointers cause they're faster
  //let's declare a variable
  int number = 7;
  //let's make a pointer
  int* pointy = &number;
  //what is this?
  //pointy is a pointer to an int which has the address of number. so we set it to the address of number
  //if we do this...
  *pointy = 10;//change the value at that address to 10. It's just like saying change the person who lives at 1600 Pennyslvania Avenue to John Smith. Tne address is the same, but the person who lives there is different.
  //since "number" references this address to, numbers value changes as well.
  std::cout << "number = " << number << std::endl;


  //in this course, there are 3  "pass-by" ways to do methods
  //a) pass by value which is the usual "int method(int value)"
  //b) pass by pointer which is using pointers "int method(int* value)"
  //look at the method above to see this demonstrated

  //since the method accepts a pointer, it means it needs an address, so we use the address-of operator to get the address of "digit", which is much faster
  int digit = 16;
  int answer = passByPointer(&digit);
  std::cout << "answer = " << answer << std::endl; //should print out 48
  //c) pass by reference, uses references which has ease of a regular variable but benefits of a poiner
  //see above method
  int newDigit = 18;
  int& reference = newDigit;
  int newAnswer = passByReference(reference);
  std::cout << "newAnswer = " << newAnswer << std::endl; //should print out 54;

  //ok, recursive functions. so in order to understand recursive functions, you must understand recursive functions
  //you see what I did there? A recursive function is a function that calls itself and it usually has some terminating factor...like a loop!
  //except ongoing recursive functions could cause a memory overhead
  //look at the fibonacci function above to recursive functions

  int newerAnswer = recursiveFibonacci(4); //should give 3;
  std::cout << "newerAnswer = " << newerAnswer << std::endl;

  return 0;


}
