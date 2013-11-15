#include <iostream>
#include "compiler.h"
#include "tokenizer.h"
#include "parser.h"

void Compiler::compile(std::string jackFileName) {
  std::shared_ptr<Tokenizer> pTokenizer = Tokenizer::buildTokenizer();
  std::string tokenFileName = pTokenizer->tokenize(jackFileName);

  std::shared_ptr<Parser> pParser = Parser::buildParser();
  pParser->parse(tokenFileName);
}
