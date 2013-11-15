#include <iostream>
#include "log.h"
#include "compiler.h"
#include "tokenizer.h"
#include "parser.h"

Compiler::Compiler(int argc, char** argv)
{
  if(argc <= 1) {
    throw std::runtime_error("No jack file name specified");
  }

  m_jackFileName = std::string(argv[1]);
}

void Compiler::compile() {
  FILE_LOG(logINFO) << "compiler: jack file name: " << m_jackFileName;
  std::shared_ptr<Tokenizer> pTokenizer = Tokenizer::buildTokenizer();
  std::string tokenFileName = pTokenizer->tokenize(m_jackFileName);

  std::shared_ptr<Parser> pParser = Parser::buildParser();
  pParser->parse(tokenFileName);
}
