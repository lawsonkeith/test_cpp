// convert function to convert roman numerals to decimal i.e. I=1 etc.
// function implements a lookup table and 
#include <math.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std; 
int Convert(string str);
#define MAX_CONVERT  4

int main()
{
	cout << "hi" << endl;
	cout << Convert("I") << endl;
	cout << Convert("i") << endl;
	cout << Convert("III") << endl;
	cout << Convert("?") << endl;
	return 0;
}


// Get the Square root of a number. 
int Convert(string str) 
{
	string conv[4] = {"I","II","III","IV"};
	int i;
	bool Valid=false;

	// convert to upper
	transform(str.begin(),str.end(),str.begin(), ::toupper);

	for( i=0;i<MAX_CONVERT;i++){
		if(str == conv[i]){
			Valid = true;
			break;
		}
	}

	if(Valid){
		return(i+1);
	}else{
		return(-1);
	}

//    double b = sqrt(a);
  //  if(b != b) // NaN check
    //    { return -1.0; }
   // else
     //   { return sqrt(a); }
}
