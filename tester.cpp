#include "File.h"

int main() {  

    char* fname = "testfile.txt";
    File f(fname);
    
    f.writeDouble(35.4);
    
}