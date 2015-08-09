# MyString
compile: g++
note:
1. Use <iostream> not <iostream.h>
2. There is a difference between vs and clang
  VS 2013 and gcc 4.8.0 accept such code, while clang 3.3 reject such code with:
  error: addition of default argument on redeclaration makes this constructor a default constructor
3. strcpy and strlen are included in <string.h>
