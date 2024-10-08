#pragma once

#include <vector>
#include <array>
#include <string>

class LinearRegression {
    private:
        std::vector<std::vector<double>> X_;
        std::vector<double> y_;

        double intercept_;
        std::vector<double> coef_;
    public:
        LinearRegression(std::vector<std::vector<std::string>> data);
};