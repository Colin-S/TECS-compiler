#include <iostream>
#include <cassert>
#include <fstream>
#include <memory>
#include "../log.h"
#include "../tokenizer.h"
#include "tokenizerImpl.h"
using namespace std;

string TokenizerImpl::tokenize(string& jackFileName) {
  assert(!jackFileName.empty());

  FILE_LOG(logINFO) << "jack file name: " << jackFileName;

  // TODO: for testing
  ifstream src("../src/test/ArrayTest/MainT.xml");
  assert(!src.fail());

  string testFile("tempT.xml");
  assert(!testFile.empty());

  ofstream dest(testFile.c_str());
  assert(!dest.fail());

  dest << src.rdbuf();
  return testFile;
}

shared_ptr<Tokenizer> Tokenizer::buildTokenizer() {
  shared_ptr<Tokenizer> pTokenizer(new TokenizerImpl());
  return pTokenizer;
}
