#include <iostream>
#include "sequence/Sequence.h"
#include "parallel/Parallel.h"
#include "readers/DirReader.h"

using namespace std;

int main() {
    Sequence sequence;
    Parallel parallel;
    DirReader dirReader;


    char path[100];
    cout << "Enter Path:";
    cin >> path;
    std::string sPath = path;
    printf(path);
    printf("%s", "\n");

    dirReader.dirReader(sPath);

    // file reader in serial
    sequence.runSequence();

    // file reader in parallel
    parallel.runParallel();

    return 0;
}

