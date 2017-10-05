//
// Created by DimRu on 13-Sep-17.
//

#include <cstdio>
#include <string>
#include <iostream>
#include <fstream>
#include "FileReader.h"
#include <algorithm>

using namespace std;

int FileReader::fileOpener(string path) {
    printf("Running fileOpener() method\n");

    return 0;
}

int FileReader::stringSearcher(string fileName, string word) {

    int lineNo = 0;
    ifstream inFile;
    string STRING;
    inFile.open(fileName);
    if (!inFile) {
        cerr << "file open error";
        exit(1);
    } else {
//        printf("success opening { %s }\n", fileName.c_str());

        while (!inFile.eof()) {
            lineNo++;
            getline(inFile, STRING);
            transform(STRING.begin(), STRING.end(), STRING.begin(), (int (*)(int)) tolower);

            if (STRING.find(word) != string::npos) {
                cout << fileName << " line :" << lineNo << endl;
            }
        }
    }
    if (inFile.is_open()) {
        inFile.close();
    }
}