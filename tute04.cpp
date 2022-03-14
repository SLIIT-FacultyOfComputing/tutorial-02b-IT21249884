/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>
using namespace std;

//Function declaration
long Factorial(int no);
long nCr(int n, int r);

//Function main starts program execution
int main() {

  //Variable declaration
  int n, r;
  
  cout << "Enter a value for n ";
  cin >> n;
  cout << "Enter a value for r ";
  cin >> r;

  //Displaying the output
  cout << "nCr = ";
  cout << nCr(n,r);
  cout << endl;
  
  return 0;
}

//Function implementation
long Factorial(int no){
   long fac = 1;

  //Repetetion starts
    for (int r = no; r >= 1; r--) {
        fac = fac * r;
    }//End of the repetition

  return fac;
}

long nCr(int n, int r){

  float factorial;
  return factorial(n) / (factorial(r) * factorial (n-r));
  
}