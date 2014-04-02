#include "DataLogger.h"

DataLogger::DataLogger(){
    dumpstream = new std::ofstream("dumpfile.txt", std::ofstream::out | std::ofstream::app);
}

DataLogger::~DataLogger() {
    
}

void DataLogger::logData() {
    for (unsigned int i = 0; i < logFunctions.size(); i++) {
        (logFunctions.at(i))(instances.at(i));
    }
}

void DataLogger::dumpNow() {
    for (unsigned int i = 0; i < dumpFunctions.size(); i++) {
        (dumpFunctions.at(i))(dumpstream, instances.at(i));
    }
}