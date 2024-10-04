#include <iostream>

#include "read_csv.h"

int main () {
    read_csv reader("src/data_example.csv");

    std::vector<std::vector<std::string>> data = reader.readCsv();

    return 0;
}
