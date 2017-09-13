//
// Created by DimRu on 13-Sep-17.
//

#include "DirReader.h"
#include <dirent.h>
#include <bits/stdc++.h>


int DirReader::dirReader(std::string path) {
    DIR *dir;

    int i = 0;
    std::string str;
    std::array<std::string, 100> fileNames;
    std::string sting[100];

    struct dirent *ent;
    if ((dir = opendir(path.c_str())) != NULL) {
        /* print all the files and directories within directory */
        std::string pth = path;
        pth = pth + "\\";

        while ((ent = readdir(dir)) != NULL) {
            if (ent->d_type == DT_REG) {
                path = pth;
                std::string file = ent->d_name;
                path = path + file;
                sting[i] = path;
                i++;
            }
        }
        closedir(dir);

        printf("no of elements : %d \n", i);
        printf("element2 : %s \n", sting[1].c_str());
        std::cout << path << std::endl;
    } else {
        /* could not open directory */
        perror("");
        return EXIT_FAILURE;
    }
    return 0;
}