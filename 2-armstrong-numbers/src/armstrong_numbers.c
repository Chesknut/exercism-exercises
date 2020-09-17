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
   int candidateSum = 0;
   int candidateDigits = candidate;

   while(candidateDigits > 0)
   {
      candidateSum += pow((candidateDigits % 10), candidateLength);
      candidateDigits /= 10;
   }

   return candidateSum == candidate;
}
