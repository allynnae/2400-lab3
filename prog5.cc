/**
 *  @file: prog5.cc
 *  @author: Allison McKee
 *  @date: 01-31-2023
 *  @brief: temperature
 * 
 */

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
   double ctof;  // equivalent Celsius temperature
   double ftoc;  // equivalent Fahrenheit temperature.
 
   double fah = 56;  //declare and initialize at the same time - page 48
   double cel = 20;

   ctof = 1.8 * cel + 32;
   ftoc = 0.5556 * (fah -32);
   ftoc = round(ftoc*10) / 10;
   ctof = round(ctof*10) / 10;

   cout << cel << " degrees Celsius in Fahrenheit is " << ctof << endl;
   cout << fah << " degrees Fahrenheit in Celsius is " << ftoc << endl;

   return (EXIT_SUCCESS);
}
