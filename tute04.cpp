/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>
using namespace std ;

long factorial(int no)
{
  long fact = 1 ;

  for (int i=2 ; i < no ;i++)
  {
    fact = fact * i ;
  }

  return fact ;
}
long nCr(int n, int r)
{

  return factorial(n) / (factorial(r) * factorial(n - r ) ) ;
}

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}
