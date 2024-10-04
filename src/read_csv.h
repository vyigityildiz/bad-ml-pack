#pragma once

#include <vector>
#include <array>
#include <string>
#include <map>

#include <iostream>
#include <fstream>
#include <sstream>

class read_csv {
    private:
        std::string filePath;
        char delimiter;
    public:

        read_csv(std::string filePath, char delimiter = ',');

        std::map<std::string, std::vector<std::string>> readCsv();
};
