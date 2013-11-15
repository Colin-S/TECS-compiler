#include <iostream>
#include "log.h"
#include "compiler.h"

//////////////////////////////////////////
void initLog(){
  FILELog::ReportingLevel() = logDEBUG3;
  FILE* logfile = fopen( "log.txt", "w" );
  Output2FILE::Stream() = logfile;
  FILE_LOG(logINFO) << "Initialized log";
}

//////////////////////////////////////////
int main(int argc, char** argv){
  initLog();
  std::string jackFileName(argv[1]);
  Compiler compiler;
  compiler.compile(jackFileName);
}
