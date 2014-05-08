#ifndef FILE_H
#define FILE_H

#include <fstream>
#include <cstdio>
#include <cstdlib>

union data_typ {
    float f;
    double d;
    int i;
};

class File {
private:
    char* filename;
    data_typ last;
    char* lastmsg;
public:
    std::ofstream filestream;
    File(char* fn);
    ~File();
    void write(float);
    void write(double);
    void write(int);
    void write(char* ch);
    data_typ getLast();
    char* getLastMsg();
    char* getName();
};

#endif