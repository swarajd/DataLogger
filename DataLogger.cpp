#include "DataLogger.h"

DataLogger::DataLogger():dumpstream("dumpfile.txt", std::ofstream::out | std::ofstream::app) {
    
}

DataLogger::~DataLogger() {
    
}

void DataLogger::addLogger(File* f, instType i, logFn l) {
    files.push_back(f);
    instances.push_back(i);
    loggers.push_back(l);
}

void DataLogger::logData() {
    for (int i = 0; i < instances.size(); i++) {
        (loggers.at(i))(files.at(i), instances.at(i));
    }
}

void DataLogger::dumpNow() {
    for (int i = 0; i < files.size(); i++) {
        data_typ cur = files.at(i)->getLast();
        dumpstream << "dumping " << files.at(i)->getName() << "'s data" << std:: endl;
        dumpstream << cur.f << std::endl;
        dumpstream << cur.d << std::endl;
        dumpstream << cur.i << std::endl;
        dumpstream << cur.ch << std::endl;
    }
}