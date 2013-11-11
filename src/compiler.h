#ifndef COMPILER_H
#define COMPILER_H

#include <iostream>

// Compiler interface
class Compiler {
public:
  // Returns the name of the vm file
  std::string compile(std::string jackFileName);

  virtual ~Compiler(){}
};

#endif
