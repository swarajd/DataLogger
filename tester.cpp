#include "File.h"
#include "File.cpp"

int main() {  

    char* fname = "testfile.txt";
    File<double> f(fname);
    
    f << 35.4;
    
}