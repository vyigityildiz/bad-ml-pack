#pragma once

#include <vector>
#include <array>
#include <string>

class Regression {
    private:
        std::vector<double> x_;
        std::vector<double> y_;
        
    public:
        Regression(std::vector<std::vector<std::string>> data);
};