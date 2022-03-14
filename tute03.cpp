/*Exercise 3 - Repeatition

Convert the C program given below which calculates the Factorial of a number that you input from the keyboard to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>
using namespace std;

//Function main started program execution
int main()
{
  //Declaring variables
    int no;
    long fac;

    cout << "Enter a Number : ";
    cin >> no;

    fac = 1;

  //Repetetion starts
    for (int r = no; r >= 1; r--) {
        fac = fac * r;
    }//End of the repetition

    //Displaying the output
    cout << "Factorial of  " << no << " is " << fac;  
  
    return 0;
}//End of the main function
