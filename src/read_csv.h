#pragma once

#include <vector>
#include <array>
#include <string>

#include <iostream>
#include <fstream>
#include <sstream>

class read_csv {
    private:
        std::string filePath;
        char delimiter;
    public:

        read_csv(std::string filePath, char delimiter = ',');

        std::vector<std::vector<std::string>> readCsv();
};
