#include "read_csv.h"

read_csv::read_csv(std::string filePath, char delimiter) : filePath(filePath), delimiter(delimiter) {}

std::vector<std::vector<std::string>> read_csv::readCsv() {
    std::vector<std::vector<std::string>> data;

    std::ifstream file;
    file.open(filePath);

    // wrong file path case
    if (!file.is_open()) {
        std::cerr << "Could not open the file at: " << filePath << std::endl;
        return data;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::vector<std::string> row;
        if (static_cast<int>(line.back()) == 13) {
            line.pop_back();
        }
        std::stringstream ss(line);
        std::string cell;

        // split the line
        while (std::getline(ss, cell, delimiter)) {
            if (cell != std::string()) {
                row.push_back(cell);
            }
        }

        data.push_back(row);
    }

    file.close();
    return data;
}
