#include <iostream>

#include "read_csv.h"

int main () {
    read_csv reader("realestate.csv");

    std::map<std::string, std::vector<std::string>> data = reader.readCsv();

    return 0;
}
