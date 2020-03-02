//
// Created by 오기승 on 2020/03/02.
//

#ifndef WEEK_1_MATRIX_H
#define WEEK_1_MATRIX_H


class matrix {
private:
    int x;
    float * list;
public:
    matrix(int x, float *list);

    int getX() const;

    void setX(int x);

    float *getList() const;

    void setList(float *list);

    bool operator==(const matrix &rhs) const;

    bool operator!=(const matrix &rhs) const;

};


#endif //WEEK_1_MATRIX_H
