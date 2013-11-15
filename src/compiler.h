#ifndef COMPILER_H
#define COMPILER_H

#include <iostream>
#include <memory>
#include "tokenizer.h"
#include "parser.h"

class Compiler {
public:
  void compile(std::string jackFileName);
};

#endif
