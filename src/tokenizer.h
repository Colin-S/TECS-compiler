#ifndef TOKENIZER_H
#define TOKENIZER_H

class Tokenizer{
  public:
    static void tokenize(std::string fileName);
  // break up each token by whitespace
  // interpret the token's type (symbol, keyword, identifier)
  // print each token to a file, wrapped in tags
};

#endif
