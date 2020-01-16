#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdint.h>
#include <iostream>


void init (void) __attribute__ ((constructor));

class Base{ 
public:
  const char* name;
  void setName(const char* s){
    name = s;
    std::cout << "Name Set"<< std::endl;
  }
};