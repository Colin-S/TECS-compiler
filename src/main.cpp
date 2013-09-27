#include <iostream>
#include <string>
#include "main.h"
#include "tokenizer.h"

Main::Main(bool toStdout):
  m_Logger(new Logger(toStdout))
{
}

Main::~Main(){
  delete m_Logger;
}

void Main::Assert(bool passed, std::string msg){
  if(!passed){
    throw std::exception(msg);
  }
}

//////////////////////////////////////////
int main(int argc, char** argv){
  try{
      
    Assert(argc == 2, "Incorrect number of arguments: " + std::string(argc));
    Tokenizer tokenizer();
    std::cout << "made tokenizer" << std::endl;

  }catch(std::exception& e){
    std::cout << "[ERROR] " << e.what();
    exit(0);
  }
}
