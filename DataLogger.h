#ifndef DATA_LOGGER_H
#define DATA_LOGGER_H

#include<ctime>
#include<cstdio>
#include<cstdlib>
#include<fstream>
#include<vector>

#include "File.h"

class DataLogger {
private:
    typedef void* inst;
    typedef void(*logFn)(inst);
    typedef void(*dumpFn)(std::ofstream*, inst);
    std::vector<inst>   instances;
    std::vector<logFn>  logFunctions;
    std::vector<dumpFn> dumpFunctions;
public:
    std::ofstream* dumpstream;
    DataLogger();
    ~DataLogger();
    void logData();
    void dumpNow();
    
};

#endif