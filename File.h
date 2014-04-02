#ifndef FILE_H
#define FILE_H

#include <fstream>
#include <cstdio>
#include <cstdlib>

template<class T>
class File {
private:
    char* filename;
    std::ofstream filestream;
    T last;
public:
    File(char* fn);
    ~File();
    void operator<<(T data);
    void write(T data);
    void msg(char* ch);
};

#endif