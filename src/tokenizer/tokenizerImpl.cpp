#include <iostream>
#include <cassert>
#include <fstream>
#include <sstream>
#include <memory>
#include "../log.h"
#include "../tokenizer.h"
#include "tokenizerImpl.h"
using namespace std;

string TokenizerImpl::tokenize(string& jackFileName) {
  assert(!jackFileName.empty());
  FILE_LOG(logINFO) << "jack file name: " << jackFileName;

  // Create name for token file
  istringstream iss(jackFileName);
  string directory;
  string slash;
  string prefix;
  getline(iss, directory, '/');
  getline(iss, prefix, '.');
  string tokenFileName(prefix + "T.xml");
  assert(!tokenFileName.empty());

  // TODO: for testing
  ifstream src("ArrayTest/MainT.xml");
  assert(!src.fail());

  ofstream dest(tokenFileName.c_str());
  assert(!dest.fail());

  dest << src.rdbuf();
  return tokenFileName;
}

shared_ptr<Tokenizer> Tokenizer::buildTokenizer() {
  shared_ptr<Tokenizer> pTokenizer(new TokenizerImpl());
  return pTokenizer;
}
