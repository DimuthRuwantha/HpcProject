#include <iostream>
#include <algorithm>
#include <thread>
#include "sequence/Sequence.h"
#include "parallel/Parallel.h"
#include "readers/DirReader.h"
#include <dirent.h>

using namespace std;

void dirVerification(string direct) {

    DIR *dir;

    if ((dir = opendir(direct.c_str())) != NULL) {
//        Sleep(3000);
//        printf("\nPath exists \n");
        closedir(dir);
    } else {
        printf("\nEnter a valid path\n");
    }
}


int main() {
    Sequence sequence;
    Parallel parallel;
    DirReader dirReader;

    // Read file path from system input
    string path;
    cout << "Enter Path:";
    cin >> path;
    cout << path;
    printf("%s", "\n");

    thread thread1(dirVerification, path);

    string word;
    cout << "Enter the Search String: ";
    cin >> word;
    transform(word.begin(), word.end(), word.begin(), (int (*)(int)) tolower);

    thread1.join();

    vector<string> st;
    st = dirReader.dirReader(path);

    // file reader in serial
    sequence.runSequence(st, word);

    // file reader in parallel
    parallel.runParallel();

    return 0;
}

