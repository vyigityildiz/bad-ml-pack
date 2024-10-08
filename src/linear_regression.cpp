#include "linear_regression.h"

LinearRegression::LinearRegression(std::vector<std::vector<std::string>> data) {
    X_ = std::vector<std::vector<double>>();
    y_ = std::vector<double>();

    intercept_ = double();
    coef_ = std::vector<double>();
}