#ifndef PARSERIMPL_H
#define PARSERIMPL_H

#include <iostream>
#include <memory>
#include "../parser.h"

class ParserImpl: public Parser {
public:
  // Returns the name of the parse tree file
  std::string parse(std::string& tokenFile);
};

#endif
