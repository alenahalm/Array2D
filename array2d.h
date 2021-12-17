#ifndef ARRAY2D_ARRAY2D_H
#define ARRAY2D_ARRAY2D_H

#include "array1d.h"

class Array2d {
private:
    vector<Array> matrix;
public:
    Array2d(double **array, size_t n, size_t m);
    void add(double *array, size_t n);
    void addArray(double **ar, size_t n, size_t m);
    double get(int index1, int index2);
    int size();
    pair<int, int> indexOf(double n);
    bool contains(double n);
    void removeByValue(double n);
    void removeById(int index1, int index2);
    void set(int index1, int index2, double n);
    int count(double n);
    void print();
};


#endif //ARRAY2D_ARRAY2D_H
