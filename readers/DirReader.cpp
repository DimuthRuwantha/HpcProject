//
// Created by DimRu on 13-Sep-17.
//

#include "DirReader.h"
#include <dirent.h>
#include <bits/stdc++.h>

using namespace std;

vector<string> DirReader::dirReader(string path) {
    DIR *dir;

    int i = 0;
    string str;
    vector<string> fileNames;
//    std::string *sting;
//    sting = new std::string[100];

    struct dirent *ent;
    if ((dir = opendir(path.c_str())) != NULL) {
        /* print all the files and directories within directory */
        string pth = path;
        pth = pth + "\\";

        while ((ent = readdir(dir)) != NULL) {
            if (ent->d_type == DT_REG) {
                path = pth;
                string file = ent->d_name;
                path = path + file;
//                sting[i] = path;
                fileNames.push_back(path);
                i++;
            }
        }
        closedir(dir);

        printf("No of files in the Directory : %d \n", i);
//        printf("element2 : %s \n", sting[1].c_str());
        cout << path << endl;
    } else {
        /* could not open directory */
        perror("could not open directory");
//        return EXIT_FAILURE;
    }
    return fileNames;
}

vector<string> DirReader::fileReader() {

    vector<string> vt;

    vt.push_back("sdjer");
    vt.push_back("olpldk");
    vt.push_back("jdkla");


//    std::string *str;
//    str = new std::string[50];
//    str[0] = "ewr";
//    str[1] = "efggr";
//    str[2] = "egdee";

    return vt;
}