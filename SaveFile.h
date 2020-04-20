//
// Created by Andrea Righetti on 20/04/2020.
//

#ifndef POWERANALYSER_SAVEFILE_H
#define POWERANALYSER_SAVEFILE_H

#include <fstream>
#include <iostream>

class SaveFile {
public:
    SaveFile();
    virtual ~SaveFile();

    void openFile();
    void closeFile();


private:
    std::ofstream* save;
};


#endif //POWERANALYSER_SAVEFILE_H
