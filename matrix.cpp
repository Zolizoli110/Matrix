#include <iostream>
#include "matrix.h"

using namespace std;

Matrix::Matrix(){};
Matrix::~Matrix(){};

int Matrix::getRows(){
    return (sizeof matrix / sizeof matrix[0]) - 1;
}

int Matrix::getCols(){
    return sizeof matrix[0] / sizeof(int);
}

void Matrix::rotateClockwise(){
    for(int i = 0; i <= getRows() / 2; i++){
        for(int j = i; j < getRows() - i; j++){
            int pos1 = matrix[i][j];
            int pos2 = matrix[j][getRows() - i];
            int pos3 = matrix[getRows() - i][getRows() - j];
            int pos4 = matrix[getRows() - j][i];

            matrix[i][j]                        = pos4;
            matrix[j][getRows() - i]            = pos1;
            matrix[getRows() - i][getRows() - j]= pos2;
            matrix[getRows() - j][i]            = pos3;
        }
    }
}

void Matrix::rotateCounterClockwise(){
    for(int i = 0; i <= getRows() / 2; i++){
        for(int j = i; j < getRows() - i; j++){
            int pos1 = matrix[i][j];
            int pos2 = matrix[j][getRows() - i];
            int pos3 = matrix[getRows() - i][getRows() - j];
            int pos4 = matrix[getRows() - j][i];

 
            matrix[i][j]                        = pos2;
            matrix[j][getRows() - i]            = pos3;
            matrix[getRows() - i][getRows() - j]= pos4;
            matrix[getRows() - j][i]            = pos1;
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
