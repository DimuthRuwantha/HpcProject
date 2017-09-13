//
// Created by DimRu on 18-Aug-17.
//

#include "Sequence.h"
#include "../readers/FileReader.h"

void Sequence::runSequence() {
    FileReader fileReader;

    std::cout << "Running Sequence" << std::endl;

    /* TODO
     * implement file reader in a for loop to read files one by one
     */
    fileReader.fileOpener();
    fileReader.stringSearcher();

}
