#include <iostream>
#include <cassert>
#include "log.h"
#include "compiler.h"

#ifdef DEBUG
  #define OUTPUT_FILE stdout
#else
  #define OUTPUT_FILE logfile
#endif

//////////////////////////////////////////
void initLog(){
  FILELog::ReportingLevel() = logDEBUG3;
  FILE* logfile = fopen( "log.txt", "w" );
  (void)logfile; // suppress unused variable warning in debug mode
  Output2FILE::Stream() = OUTPUT_FILE;
  FILE_LOG(logINFO) << "Initialized log";
}

//////////////////////////////////////////
int main(int argc, char** argv){
  try {

    initLog();
    Compiler compiler(argc, argv);
    compiler.compile();

  } catch(std::exception& e) {
    FILE_LOG(logERROR) << e.what();
  }
}
