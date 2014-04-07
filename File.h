#ifndef FILE_H
#define FILE_H

#include <fstream>
#include <cstdio>
#include <cstdlib>

union data_typ {
    float f;
    double d;
    int i;
    char* ch;
};

class File {
private:
    char* filename;
    data_typ last;
public:
    std::ofstream filestream;
    File(char* fn);
    ~File();
    void writeFloat(float);
    void writeDouble(double);
    void writeInt(int);
    void writeStr(char* ch);
    data_typ getLast();
    char* getName();
};

#endif