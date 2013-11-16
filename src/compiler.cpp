#include <iostream>
#include <cassert>
#include "log.h"
#include "compiler.h"
#include "tokenizer.h"
#include "parser.h"

Compiler::Compiler(int argc, char** argv)
{
  if(argc <= 1) {
    throw std::runtime_error("No jack file name specified");
  }

  assert(argv[1] != NULL);

  std::string temp(argv[1]);
  m_jackFileName = temp;

  assert(!m_jackFileName.empty());
}

void Compiler::compile() {
  assert(!m_jackFileName.empty());

  FILE_LOG(logINFO) << "compiler: jack file name: " << m_jackFileName;
  std::shared_ptr<Tokenizer> pTokenizer = Tokenizer::buildTokenizer();
  std::string tokenFileName = pTokenizer->tokenize(m_jackFileName);

  assert(!tokenFileName.empty());

  std::shared_ptr<Parser> pParser = Parser::buildParser();
  pParser->parse(tokenFileName);
}
