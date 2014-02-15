#include <fstream>
#include <string>
#include <sstream>
#include <cstdio>
#include "catch.hpp"
#include "../tokenizer.h"
using namespace std;

SCENARIO("The tokenizer can tokenize ArrayTest jack files", "[tokenizer]") {

  GIVEN("A tokenizer") {
    shared_ptr<Tokenizer> pTokenizer = Tokenizer::buildTokenizer();
    REQUIRE(pTokenizer);

    WHEN("Main.jack is tokenized") {
      string jackfileName("ArrayTest/Main.jack");
      string tokenFileName = pTokenizer->tokenize(jackfileName);

      REQUIRE(tokenFileName == "MainT.xml");

      THEN("Main.jack is tokenized correctly") {
        ifstream tokenFile(tokenFileName.c_str());
        REQUIRE(!tokenFile.fail());
        ifstream testFile("ArrayTest/MainT.xml");
        REQUIRE(!testFile.fail());

        string tokenFileLine;
        string testFileLine;

        while(getline(tokenFile, tokenFileLine)) {
          getline(testFile, testFileLine);
          REQUIRE(testFileLine == tokenFileLine);
        }
        REQUIRE(getline(testFile, testFileLine).eof());
      }

      // Remove the created file
      remove(tokenFileName.c_str());
      ifstream deletedFile(tokenFileName.c_str());
      REQUIRE(deletedFile.fail());
    }
}

SCENARIO("The tokenizer can tokenize SquareGame jack files", "[tokenizer]") {

  GIVEN("A tokenizer") {
    shared_ptr<Tokenizer> pTokenizer = Tokenizer::buildTokenizer();
    REQUIRE(pTokenizer);

    WHEN("Main.jack is tokenized") {
      string jackfileName("ArrayTest/Main.jack");
      string tokenFileName = pTokenizer->tokenize(jackfileName);

      REQUIRE(tokenFileName == "MainT.xml");

      THEN("Main.jack is tokenized correctly") {
        ifstream tokenFile(tokenFileName.c_str());
        REQUIRE(!tokenFile.fail());
        ifstream testFile("ArrayTest/MainT.xml");
        REQUIRE(!testFile.fail());

        string tokenFileLine;
        string testFileLine;

        while(getline(tokenFile, tokenFileLine)) {
          getline(testFile, testFileLine);
          REQUIRE(testFileLine == tokenFileLine);
        }
        REQUIRE(getline(testFile, testFileLine).eof());
      }

      // Remove the created file
      remove(tokenFileName.c_str());
      ifstream deletedFile(tokenFileName.c_str());
      REQUIRE(deletedFile.fail());
    }
}
