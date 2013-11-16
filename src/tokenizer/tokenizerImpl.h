#ifndef TOKENIZERIMPL_H
#define TOKENIZERIMPL_H

#include <iostream>
#include <memory>
#include "../tokenizer.h"

class TokenizerImpl: public Tokenizer {
public:
  // Returns the name of the token file
  std::string tokenize(std::string& jackFileName);
};

#endif
