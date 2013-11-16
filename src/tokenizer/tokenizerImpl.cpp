#include <iostream>
#include <cassert>
#include <fstream>
#include <memory>
#include "../log.h"
#include "../tokenizer.h"
#include "tokenizerImpl.h"

std::string TokenizerImpl::tokenize(std::string& jackFileName) {
  assert(!jackFileName.empty());

  FILE_LOG(logINFO) << "jack file name: " << jackFileName;

  // TODO: for testing
  std::ifstream src("../src/test/ArrayTest/MainT.xml");
  assert(!src.fail());

  std::string testFile("temtT.xml");
  assert(!testFile.empty());

  std::ofstream dest(testFile.c_str());
  assert(!dest.fail());

  dest << src.rdbuf();
  return testFile;
}

std::shared_ptr<Tokenizer> Tokenizer::buildTokenizer() {
  std::shared_ptr<Tokenizer> pTokenizer(new TokenizerImpl());
  return pTokenizer;
}
