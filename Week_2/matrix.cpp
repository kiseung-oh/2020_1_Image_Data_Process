//
// Created by 오기승 on 2020/03/02.
//

#include "matrix.h"


matrix::matrix(int x, float *list) : x(x), list(list) {}

int matrix::getX() const {
    return x;
}

void matrix::setX(int x) {
    matrix::x = x;
}

float *matrix::getList() const {
    return list;
}

void matrix::setList(float *list) {
    matrix::list = list;
}

bool matrix::operator==(const matrix &rhs) const {
    return x == rhs.x &&
           list == rhs.list;
}

bool matrix::operator!=(const matrix &rhs) const {
    return !(rhs == *this);
}
