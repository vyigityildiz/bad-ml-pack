#pragma once

#include <vector>
#include <array>
#include <string>
#include <map>
#include <cmath>

#include <iostream>

class Vector {
    private:
        std::vector<double> values_;
    public:
        Vector(const std::vector<double>& val);

        size_t size() const; // return size
        double& operator[](size_t i); // modify element at index i
        const double& operator[](size_t i) const; // get element at index i

        // operations
        double dot(const Vector& other) const;
        Vector operator+(const Vector& other) const;
        Vector operator-(const Vector& other) const;
        Vector operator*(const Vector& other) const;

        // print for debugging
        void print() const;
};  

class Matrix {
    private:
        std::vector<std::vector<double>> values_;
    public:
        Matrix(std::vector<std::vector<double>> val);

        // return number of rows and columns
        size_t rows() const;
        size_t cols() const;

        double& operator()(size_t row, size_t col); // modify element at (row, col)
        const double& operator()(size_t row, size_t col) const; // get element at (row, col)

        // operations
        Matrix transpose() const;
        Vector operator*(const Vector& other); // matrix vector multiplication
        Matrix operator*(const Matrix& other); // matrix matrix multiplication

        // print for debugging
        void print();
};