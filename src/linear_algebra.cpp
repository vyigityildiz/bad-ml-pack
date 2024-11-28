#include "linear_algebra.h"

// Vector implementations

Vector::Vector(const std::vector<double>& val) {
    values_ = val;
}

size_t Vector::size() const{
    return values_.size();
}

double& Vector::operator[](size_t i) {
    if (i >= values_.size()) {
        throw std::out_of_range("Index out of range");
    }

    return values_[i];
}

const double& Vector::operator[](size_t i) const {
    if (i >= values_.size()) {
        throw std::out_of_range("Index out of range.");
    }

    return values_[i];
}

double Vector::dot(const Vector& other) const{
    if (size() != other.size()) {
        throw std::invalid_argument("Vectors must have the same size.");
        return NULL;
    }

    double result = 0;
    for (size_t i = 0; i < size(); ++i) {
        result += values_[i] * other[i];
    }
    return result;
}

Vector Vector::operator+(const Vector& other) const {
    std::vector<double> result;
    for (size_t i = 0; i < size(); ++i) {
        result.push_back(values_[i] + other[i]);
    }

    return Vector(result);
}

Vector Vector::operator-(const Vector& other) const {
    std::vector<double> result;
    for (size_t i = 0; i < size(); ++i) {
        result.push_back(values_[i] - other[i]);
    }

    return Vector(result);
}

Vector Vector::operator*(const Vector& other) const {
    std::vector<double> result;
    for (size_t i = 0; i < size(); ++i) {
        result.push_back(values_[i] * other[i]);
    }

    return Vector(result);
}

void Vector::print() const {
    for (auto v:values_) {
        std::cout << v << " ";
    }
}

// TODO implement Matrix class
