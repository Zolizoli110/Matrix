#include <iostream>

using namespace std;

class Matrix{

    public:
        int matrix[4][4] = {
            {11, 12, 13, 14},
            {21, 22, 23, 24},
            {31, 32, 33, 34},
            {41, 42, 43, 44}
        };
        Matrix();
        int getRows();
        int getCols();
        void rotateClockwise();
        void rotateCounterClockwise();
        void write();
};
