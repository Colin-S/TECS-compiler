#include <iostream>
#include <memory>
#include "../parser.h"
#include "parserImpl.h"

std::string ParserImpl::parse(std::string& tokenFile) {
  return NULL;
}

std::shared_ptr<Parser> Parser::buildParser() {
  std::shared_ptr<Parser> pParser(new ParserImpl());
  return pParser;
}
