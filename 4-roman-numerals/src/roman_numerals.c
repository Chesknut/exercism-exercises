/*
--- Chesknut's Super Omega Amazing Possibly Inefficient Pseudocode ---
   1. Store roman numeral conversion in character array - check
   2. Create key-value mapping for roman numerals and corresponding values - check
   3. For loop through each roman numeral pairing, at each iteration: - check
      a. While roman numeral iteration's normal number value is less than or equal to number (input): - check
         i. Concatenate iteration's roman numeral key to romanNumeralConversion char array - check
         ii. Set number (input) equal to number subtracted by roman numeral iteration's decimal value - check
   4. Return modified roman numeral conversion character array - check
*/

#include "roman_numerals.h"
#include <stdlib.h>
#include <string.h>

char *to_roman_numeral(unsigned int number)
{
   // Set to 13 because max length of roman numeral conversion string is 13 (under 3000)
   char *romanNumeralConversion = calloc(13, 1);

   struct RomanNumeralKeyValues
   {
      char *romanNumeralKey;
      unsigned int normalNumberVal;
   };

   struct RomanNumeralKeyValues romanNumeralArr[13] = {
      { "I", 1 },
      { "IV", 4 },
      { "V", 5 },
      { "IX", 9 },
      { "X", 10 },
      { "XL", 40 },
      { "L", 50 },
      { "XC", 90 },
      { "C", 100 },
      { "CD", 400 },
      { "D", 500 },
      { "CM", 900 },
      { "M", 1000 }
   };

   for(unsigned int i = 13; i-- > 0;)
   {
      while(romanNumeralArr[i].normalNumberVal <= number)
      {
         strcat(romanNumeralConversion, romanNumeralArr[i].romanNumeralKey);
         number -= romanNumeralArr[i].normalNumberVal;
      }
   }

   return romanNumeralConversion;
}
