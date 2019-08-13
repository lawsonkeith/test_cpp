# Unit test example
Function to convert roman to decimal, this repo shows the use of TDD approact to a simple conversion of roman to decimal numbers.
We use the g++ compiler and gtest framework.

Features:

* Converts first 1..100 numerals
* Case insensitive
* Insensitive to leading and trailing spaces

i.e. Convert(" i i I  ") returns 3.

## Generating lookup
The function uses a basic lookup array which can be generated in excel as follows.

* 1st row, count 1..n
* 2nd row, use n=ROMAN()
* Paste as values
* export as csv
* put in rows
* search replace , to "," to get in correct fmt 


## Reference notes

* https://www.srcmake.com/home/google-cpp-test-framework


## To run

* cmake 
* CMakeLists.txt
* make
* ./executeTests



## Limitations

Currently converts first 100 numerals only.
