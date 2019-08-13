# Unit test example
Class to convert roman to decimal, this repo shows the use of TDD approact to a siple conversion of roman to deciman numbers.
We use the g++ compiler and gtest framework.


## Generating lookup
The function uses a basic lookup array hich can be generated as follows.

* Use n=ROMAN() in excel.
* Paste as values
* export as csv
* put in rows
* search replace , to "," to get in correct fmt 


## Reference notes

* https://www.srcmake.com/home/google-cpp-test-framework


## To run

cmake CMakeLists.txt
make
./executeTests


## Limitations

Currently converts first 100 numerals only.
