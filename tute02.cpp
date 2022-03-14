/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>
using namespace std;

//Main function starts program execution
int main()
{
  //Variable declaration
   double salary, netSalary;
   int etype, otHrs, otRate;

  //Getting user inputs
   cout << "Enter Employee Type : ";
   cin >> etype;
  
   cout << "Enter Salary  : ";
   cin >> salary;
  
   cout << "Enter OtHrs : ";
   cin >> otHrs; 

  //Selection starts
   switch (etype) {
      case 1 :
          otRate = 1000;
          break;
      case 2 :
          otRate = 1500;
          break;
      default:
          otRate = 1700;
    
   }//End of the selection

  //Calculation
   netSalary = salary + otHrs* otRate;

  //Displaying the output
   cout << "Net Salary is " << netSalary << endl;
  
   return 0;
}//End of the main function
