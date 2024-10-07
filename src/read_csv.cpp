#include "read_csv.h"

read_csv::read_csv(std::string filePath, char delimiter) : filePath(filePath), delimiter(delimiter) {}

std::map<std::string, std::vector<std::string>> read_csv::readCsv() {
    std::vector<std::vector<std::string>> dataRaw;
    std::map<std::string, std::vector<std::string>> data; // TODO: change the structure

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

        dataRaw.push_back(row);
    }

    for (auto it:dataRaw[0]) {
        data[it] = std::vector<std::string>();
    }
    dataRaw.erase(dataRaw.begin());

    for (auto iter:dataRaw) {
        for (auto i:iter) {
            // implement  structural change here
            continue;
        }
    }

    file.close();
    return data;
}
