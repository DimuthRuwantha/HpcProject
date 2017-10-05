//
// Created by DimRu on 18-Aug-17.
//

#include "Sequence.h"
#include "../readers/FileReader.h"
#include "../readers/DirReader.h"

using namespace std;

void Sequence::runSequence(vector<string> fileNames, string word) {
    FileReader fileReader;
    DirReader dirReader;

    cout << "Running Sequence" << endl;
    clock_t start = clock();
    for (int i = 0; i < fileNames.size(); ++i) {

        fileReader.stringSearcher(fileNames[i], word);

    }

    clock_t end = clock();
    float duration = (float) (end - start) / CLOCKS_PER_SEC;

    printf("time elapsed %f \n", duration);
//    fileReader.fileOpener();

}
