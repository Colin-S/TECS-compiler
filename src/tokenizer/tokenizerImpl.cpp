#include <iostream>
#include <memory>
#include "../tokenizer.h"
#include "tokenizerImpl.h"

std::string TokenizerImpl::tokenize(std::string& jackFileName) {
  return NULL;
}

std::shared_ptr<Tokenizer> Tokenizer::buildTokenizer() {
  std::shared_ptr<Tokenizer> pTokenizer(new TokenizerImpl());
  return pTokenizer;
}
