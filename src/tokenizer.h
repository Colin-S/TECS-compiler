#ifndef TOKENIZER_H
#define TOKENIZER_H

#include <iostream>
#include <memory>

class Tokenizer {
public:
  // Returns the name of the token file
  virtual std::string tokenize(std::string& jackFileName) = 0;

  static std::shared_ptr<Tokenizer> buildTokenizer();

  virtual ~Tokenizer(){}
};

#endif
