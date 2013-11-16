#ifndef PARSER_H
#define PARSER_H

#include <iostream>
#include <memory>

class Parser {
public:
  // Returns the name of the parse tree file
  virtual std::string parse(std::string& tokenFile) = 0;

  static std::shared_ptr<Parser> buildParser();

  virtual ~Parser(){}
};

#endif
