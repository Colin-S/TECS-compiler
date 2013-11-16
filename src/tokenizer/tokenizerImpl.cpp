#include <iostream>
#include <memory>
#include "../log.h"
#include "../tokenizer.h"
#include "tokenizerImpl.h"

std::string TokenizerImpl::tokenize(std::string& jackFileName) {
  FILE_LOG(logINFO) << "jack file name: " << jackFileName;

  // TODO: for testing
  std::ifstream src("
  return NULL;
}

std::shared_ptr<Tokenizer> Tokenizer::buildTokenizer() {
  std::shared_ptr<Tokenizer> pTokenizer(new TokenizerImpl());
  return pTokenizer;
}
