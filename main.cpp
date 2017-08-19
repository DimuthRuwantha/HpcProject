#include <iostream>
#include "sequence/Sequence.h"
#include "parallel/Parallel.h"

using namespace std;

int main() {
    Sequence sequence;
    Parallel parallel;

    sequence.runSequence();
    parallel.runParallel();

    return 0;
}

//    ifstream inFile;
//    inFile.open("Makefile");
//    if (!inFile){
//        std::cerr<<"file open error";
//        exit(1);
//    }
//
//    inFile.close();