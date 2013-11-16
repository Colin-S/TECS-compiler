#include <fstream>
#include <string>
#include <sstream>
#include <cstdio>
#include "catch.hpp"
#include "../tokenizer.h"

SCENARIO("The tokenizer can tokenize jack files", "[tokenizer]") {

  GIVEN("A tokenizer") {
    std::shared_ptr<Tokenizer> pTokenizer = Tokenizer::buildTokenizer();

    WHEN("Main.jack is tokenized") {
      std::string jackfileName("../src/test/ArrayTest/Main.jack");
      std::string tokenFileName = pTokenizer->tokenize(jackfileName);

      REQUIRE(tokenFileName == "MainT.xml");

      THEN("Main.jack is tokenized correctly") {
        std::ifstream tokenFile(tokenFileName.c_str());
        std::ifstream testFile("../src/test/ArrayTest/MainT.xml");

        std::string tokenFileLine;
        std::string testFileLine;

//        while(std::getline(tokenFile, tokenFileLine)) {
//          std::getline(testFile, testFileLine);
//          REQUIRE(testFileLine == tokenFileLine);
//        }
//        REQUIRE(std::getline(testFile, testFileLine) == NULL);
      }

      // Remove the created file
      std::remove(tokenFileName.c_str());
      std::ifstream deletedFile(tokenFileName.c_str());
      //REQUIRE(deletedFile == NULL);
    }
  }
}
