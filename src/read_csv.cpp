#include "read_csv.h"

read_csv::read_csv(std::string filePath, char delimiter = ',') : filePath(filePath), delimiter(delimiter) {}

std::vector<int> read_csv::readCsv() {
    return std::vector<int>();
}
