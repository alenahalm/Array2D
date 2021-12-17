#include "array1d.h"

Array::Array(double ar[], int n) {
    for(int i = 0; i < n; i++) {
        this->array.push_back(ar[i]);
    }
}

void Array::add(double n) {
    this->array.push_back(n);
}

void Array::addArray(double *ar, size_t n) {
    for (int i = 0; i < n; ++i) {
        this->array.push_back(ar[i]);
    }
}

double Array::get(int index) {
    return this->array[index];
}

int Array::size() {
    return this->array.size();
}

int Array::indexOf(double n) {
    for (int i = 0; i < this->array.size(); ++i) {
        if (this->array[i] == n) {
            return i;
        }
    }
    return -1;
}

bool Array::contains(double n) {
    for (int i = 0; i < this->array.size(); ++i) {
        if (this->array[i] == n) {
            return true;
        }
    }
    return false;
}

void Array::removeByValue(double n) {
    for (int i = 0; i < this->array.size(); ++i) {
        if (this->array[i] == n) {
            this->array.erase(this->array.begin() + i);
        }
    }
}

void Array::removeById(int index) {
    this->array.erase(this->array.begin() + index);
}

void Array::set(int index, double n) {
    this->array[index] = n;
}

int Array::count(double n) {
    int counter = 0;
    for (int i = 0; i < this->array.size(); ++i) {
        if (this->array[i] == n) {
            counter++;
        }
    }
    return counter;
}

void Array::print() {
    cout<<"[";
    for (int i = 0; i < this->array.size() - 1; ++i) {
        cout<<this->array[i]<<", ";
    }
    cout<<this->array[this->array.size() - 1]<<"]"<<endl;
}
