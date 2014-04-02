#include "File.h"

template<class T>
File<T>::File(char* fn):filestream(fn, std::ofstream::out | std::ofstream::app) {
    filename = fn;
    last = NULL;
}

template<class T>
File<T>::~File() {
    filestream.close();
}

template<class T>
void File<T>::operator<<(T data) {
    last = data;
    filestream << data << std::endl;
    filestream.flush();
}

template<class T>
void File<T>::write(T data) {
    last = data;
    filestream << data << std::endl;
    filestream.flush();
}

template<class T>
void File<T>::msg(char* data) {
    filestream << data << std::endl;
    filestream.flush();
}