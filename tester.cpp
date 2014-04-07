#include "File.h"

int main() {  

    char* fname = "testfile.txt";
    File f(fname);
    
    f.writeDouble(35.4);
    
    data_typ d;
    d.d = 6;
    printf("%f", d.f);
}