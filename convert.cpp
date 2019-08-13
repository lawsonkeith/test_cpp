// convert function to convert roman numerals to decimal i.e. I=1 etc.
// function implements a lookup table and 
#include <math.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std; 
int Convert(string str);

// This must match sizeof conversion array
#define MAX_CONVERT  100


//  Convert a roman numeral string to a decimal number using lookup table
//  Function takes a string input and returns a integer, inputs are not case sensitive.
//  e.g. n = Convert("C"); // returns 100
int Convert(string str) 
{
	// lookup table - see notes hot to generate
	string conv[MAX_CONVERT] = {"I","II","III","IV","V","VI","VII","VIII","IX","X","XI","XII","XIII","XIV","XV","XVI","XVII","XVIII","XIX","XX","XXI","XXII","XXIII","XXIV","XXV","XXVI","XXVII","XXVIII","XXIX","XXX","XXXI","XXXII","XXXIII","XXXIV","XXXV","XXXVI","XXXVII","XXXVIII","XXXIX","XL","XLI","XLII","XLIII","XLIV","XLV","XLVI","XLVII","XLVIII","XLIX","L","LI","LII","LIII","LIV","LV","LVI","LVII","LVIII","LIX","LX","LXI","LXII","LXIII","LXIV","LXV","LXVI","LXVII","LXVIII","LXIX","LXX","LXXI","LXXII","LXXIII","LXXIV","LXXV","LXXVI","LXXVII","LXXVIII","LXXIX","LXXX","LXXXI","LXXXII","LXXXIII","LXXXIV","LXXXV","LXXXVI","LXXXVII","LXXXVIII","LXXXIX","XC","XCI","XCII","XCIII","XCIV","XCV","XCVI","XCVII","XCVIII","XCIX","C"};
	int i;
	bool Valid=false;

	// convert user input to upper case
	transform(str.begin(),str.end(),str.begin(), ::toupper);

	// padding error fix
	str.erase(remove(str.begin(),str.end(),' '),str.end());

	// look for a match
	for( i=0;i<MAX_CONVERT;i++){
		if(str == conv[i]){
			Valid = true;
			break;
		}
	}

	// check result and return result
	if(Valid){
		return(i+1);
	}else{
		return(-1);
	}
}//END Convert
