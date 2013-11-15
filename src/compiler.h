#ifndef COMPILER_H
#define COMPILER_H

#include <iostream>
#include <string>

class Compiler {
public:
  Compiler(int argc, char** argv);
  void compile();
private:
  std::string m_jackFileName;
};

#endif
