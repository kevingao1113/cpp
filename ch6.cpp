
// Created on Kevin’s iPad.

//   Cpp  learning diary since Feb 16

6.6 Cpp standard library header

headers that contain function prototypes, 
                     definitions of various class type and number functions
                     constants  
 form the library

  instructs compiler  to interface with library and following user-written part

#include<iosteam>
//constants Cpp standard input and output function prototypes
#include<iomanip>	
//contains function  prototypes for stream  manipulators that  format streams of data
#include<cmath>	
// prototypes for math library functions 
#include<cstdlib>	
//contains function prototypes for conversions of numbers to text ,text to nunbers  memory allocation and various other utility functions (C11 C17 C22)
#include <ctime>
//contains function prototype and types for manipulating  time and date 

#include <array>
#include <vector> //first introdeced in ch7 
#include <list>
#include <forward_list>
#include <deque>
#include <queue>
#include <stack>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <bitset>
//contains classes that inpliment the cpp standard library containers which  store data during the execution of program 
//All above headers will be discussed in ch15 'Standard Library Containers and Iterators'

#include <cctype>
//This header ontains func prototypes test charactor's' certain propety , such as juding digit or punctuation.(Ch22)

#include <cstring>
//contains func prototypes for C-style string-processing functions (Ch10)

#include <typeinfo>
//contains classes for runtime type identification (determine data type at execution time)

#include <exception>
#include <stdexcept>
//contains classes that used for exception handling

#include <memory>
//contains classes and functions that used to allocate memory to cpp standard library containers 

#include <fstream>
//contions func prototypes to perform input from or output to file on disk (Ch14)

#include <string>
//contains the def of class string from Cpp S.L.

#include <sstream>
//input from strings or output from strings in memory (Ch21)


#include <iterator>
//Classes for accessing data in cpp slc

#include<algorithm>
//Functions for manipulating data in cpp slc 

#include<cassert> //contains macros for adding disgnostics that aid program debuging

#include<algorithm>//contains functions for manipulating data in cpp slc 

#include<cstdio>//contains func prototypes for c-style standard IO library function
#include<utility>  //contions classes and funcs that used by many cpp slh 
#include<cfloat>      //floating-point size limits
#include<climits>   //integral size limits
#include<limits>      //contains classes for defining numerical data type limits





