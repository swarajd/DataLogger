#ifndef DATA_LOGGER_H
#define DATA_LOGGER_H

#include<ctime>
#include<cstdio>
#include<cstdlib>
#include<fstream>
#include<vector>

#include "File.h"

class DataLogger {
public:
    //should be private but compiler is crying
    typedef void* instType;
    typedef void(*logFn)(File*, instType);  
    std::vector<File*>     files;
    std::vector<instType> instances;
    std::vector<logFn>    loggers;
    
    std::ofstream dumpstream;
    DataLogger();
    ~DataLogger();
    void addLogger(File*, instType, logFn);
    void logData();
    void dumpNow();
};

#endif