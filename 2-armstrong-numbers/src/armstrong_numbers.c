/*
    1. Store length of candidate integer in var - check
	2. While loop to iterate through digits of candidate integer (until digit == 0) - at each iteration: - check
		a. Modulus to retrieve digit and raise that to length of candidate - check
  	    b. Add this to sum var of previous result - check
	3. Check if sum var is == to int candidate (input) - check
		a. if yes, return true - check
  	    b. else, return false - check
*/

#include "armstrong_numbers.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

bool is_armstrong_number(int candidate)
{
   int candidateLength = floor(log10(abs(candidate))) + 1;
   int digitRaised = 0;
   int candidateSum = 0;

   while(candidate != 0)
   {
      digitRaised = pow((candidate % 10), candidateLength);
      candidateSum += digitRaised;
      candidate /= 10;
   }

   if(candidateSum == candidate)
   {
      return true;
   }
   else
   {
      return false;
   }
}
