#include "read_csv.h"

read_csv::read_csv(std::string filePath, char delimiter) : filePath(filePath), delimiter(delimiter) {}

std::map<std::string, std::vector<std::string>> read_csv::readCsv() {
    std::vector<std::vector<std::string>> dataRaw;
    std::map<std::string, std::vector<std::string>> data;

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
            line.append("");
        }
        std::stringstream ss(line);
        std::string cell;

        // split the line
        while (std::getline(ss, cell, delimiter)) {
            row.push_back(cell); // TODO: maybe implement another storage value for empty strings rather than storing them diretly
        }

        dataRaw.push_back(row);
    }

    std::vector<std::string> keys;
    for (auto it:dataRaw[0]) {
        data[it] = std::vector<std::string>();
        keys.push_back(it);
    }
    dataRaw.erase(dataRaw.begin());

    for (auto iter:dataRaw) {
        for (size_t i = 0; i < iter.size(); ++i) {
            data[keys[i]].push_back(iter[i]);
        }
    }

    file.close();
    return data;
}
