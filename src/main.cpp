#include <iostream>
#include <string>
#include <stdexcept>
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
    throw std::runtime_error(msg);
  }
}

//////////////////////////////////////////
int main(int argc, char** argv){
  Main main(true);
  try{
    main.Assert(argc == 2, "Incorrect number of arguments: " + std::to_string(argc));
    Tokenizer tokenizer();
    std::cout << "made tokenizer" << std::endl;

  }catch(std::runtime_error& e){
    std::cout << "[ERROR] " << e.what() << std::endl;
    exit(0);
  }
}
