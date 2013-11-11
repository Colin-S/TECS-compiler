#include "log.h"

void initLog(){
  FILELog::ReportingLevel() = logDEBUG3;
  FILE* logfile = fopen( "log.txt", "w" );
  Output2FILE::Stream() = logfile;
}

//////////////////////////////////////////
int main(int argc, char** argv){
  initLog();
  FILE_LOG(logINFO) << "Start";
}
