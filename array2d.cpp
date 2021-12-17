#include "array2d.h"

Array2d::Array2d(double **array, size_t n, size_t m) {
    for (int i = 0; i < n; ++i) {
        this->matrix.push_back(Array(array[i], m));
    }
}

void Array2d::add(double *array, size_t n) {
    this->matrix.push_back(Array(array, n));
}

void Array2d::addArray(double **array, size_t n, size_t m) {
    for (int i = 0; i < n; ++i) {
        this->matrix.push_back(Array(array[i], m));
    }
}

double Array2d::get(int index1, int index2) {
    return this->matrix[index1].get(index2);
}

int Array2d::size() {
    return this->matrix.size();
}

pair<int, int> Array2d::indexOf(double n) {
    for (int i = 0; i < this->matrix.size(); ++i) {
        if (this->matrix[i].indexOf(n) > -1) {
            return make_pair(i, this->matrix[i].indexOf(n));
        }
    }
    return make_pair(-1, -1);
}

bool Array2d::contains(double n) {
    for (int i = 0; i < this->matrix.size(); ++i) {
        if (this->matrix[i].contains(n)) {
            return true;
        }
    }
    return false;
}

void Array2d::removeByValue(double n) {
    for (int i = 0; i < this->matrix.size(); ++i) {
        this->matrix[i].removeByValue(n);
    }
}

void Array2d::removeById(int index1, int index2) {
    this->matrix[index1].removeById(index2);
}

void Array2d::set(int index1, int index2, double n) {
    this->matrix[index1].set(index2, n);
}

int Array2d::count(double n) {
    int counter = 0;
    for (int i = 0; i < this->matrix.size(); ++i) {
        counter += this->matrix[i].count(n);
    }
    return 0;
}

void Array2d::print() {
    cout << "[";
    for (int i = 0; i < this->matrix.size(); ++i) {
        this->matrix[i].print();
    }
    cout << "]" << endl;
}
