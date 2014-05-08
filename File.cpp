#include "File.h"

File::File(char* fn):filestream(fn, std::ofstream::out) {
    filename = fn;
}

File::~File() {
    
}

void File::write(float f) {
    filestream << f << std::endl;
    last.f = f;
}

void File::write(double d) {
    filestream << d << std::endl;
    last.d = d;
}

void File::write(int i) {
    filestream << i << std::endl;
    last.i = i;
}

void File::write(char* ch) {
    filestream << ch << std::endl;
    lastmsg = ch;
}

data_typ File::getLast(){
    return last;
}

char* File::getLastMsg() {
    return lastmsg;
}

char* File::getName() {
    return filename;
}