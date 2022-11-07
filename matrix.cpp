#include <iostream>
#include "matrix.h"

using namespace std;

Matrix::Matrix(){};

int Matrix::getRows(){
    return (sizeof matrix / sizeof matrix[0]) - 1;
}

int Matrix::getCols(){
    return sizeof matrix[0] / sizeof(int);
}

void Matrix::rotateClockwise(){
    for(int i = 0; i <= getRows() / 2; i++){
        for(int j = i; j < getRows() - i; j++){
            int tmp= matrix[i][j];

            matrix[i][j]                        = matrix[getRows() - j][i];
            matrix[getRows() - j][i]            = matrix[getRows() - i][getRows() - j];
            matrix[getRows() - i][getRows() - j]= matrix[j][getRows() - i];
            matrix[j][getRows() - i]            = tmp;
        }
    }
}

void Matrix::rotateCounterClockwise(){
    for(int i = 0; i <= getRows() / 2; i++){
        for(int j = i; j < getRows() - i; j++){
            int tmp = matrix[i][j];

            matrix[i][j]                        = matrix[j][getRows() - i];
            matrix[j][getRows() - i]            = matrix[getRows() - i][getRows() - j];;
            matrix[getRows() - i][getRows() - j]= matrix[getRows() - j][i];
            matrix[getRows() - j][i]            = tmp;
        }
    }
}

void Matrix::write(){
    for(int i = 0; i <= getRows(); i++){
        cout << "{";
        for(int j = 0; j < getCols(); j++){
            cout << matrix[i][j] << ",";
        }
        cout << "}" << endl;
    }
}
