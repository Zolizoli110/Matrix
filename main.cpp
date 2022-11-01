#include <iostream>
#include <string>
#include "matrix.h"

using namespace std;

int main(){

    Matrix matrix;
    bool exit = false;
    matrix.write();
    
    while(!exit){
        cout << endl;
        cout << "Choose what you want to do!" << endl;
        cout << "Rotate left (l)" << endl;
        cout << "Rotate right (r)" << endl;
        cout << "Exit (x)" << endl;
        char direction;
        cin >> direction;

        if(direction == 'l' || direction == 'L'){
            for(int i = 0; i < 4; i++){
                matrix.rotateCounterClockwise();
                matrix.write();
                cout << endl;
            }
        }else if(direction == 'r' || direction == 'R'){
            for(int i = 0; i < 4; i++){
                matrix.rotateClockwise();
                matrix.write();
                cout << endl;
            }
        }else if(direction == 'x' || direction == 'X'){
            exit = true; 
        }else{
            cout << "Not recognised input!";
        }
    }

    //Matrix matrix;
    //matrix.write();
    //matrix.rotateClockwise();
    //cout << endl;
    //matrix.write();
    //cout << endl;
    //matrix.rotateCounterClockwise();
    //matrix.write();

//    int matrix[4][4] = {
//            {11, 12, 13, 14},
//            {21, 22, 23, 24},
//            {31, 32, 33, 34},
//            {41, 42, 43, 44},
//    };
//
//    int rows = sizeof matrix / sizeof matrix[0];
//    int cols = sizeof matrix[0] / sizeof(int);
//    int rows2 = rows - 1;
//
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            cout << matrix[i][j] << ",";
//        }
//        cout << endl;
//    }
//
//    
//    while(true){
//    cout << "-------------------" << endl;
//    
//    for (int i = 0; i <= rows2 / 2; i++)
//    {
//        for (int j = i; j < rows2 - i; j++)
//        {
//            int pos1 = matrix[i][j]; int pos2 = matrix[j][rows2 - i]; int pos3 = matrix[rows2 - i][rows2 - j];
//            int pos4 = matrix[rows2 - j ][i];
//
//            matrix[j][rows2 - i] = pos1;
//            matrix[rows2 -i][rows2 - j] = pos2;
//            matrix[rows2 - j][i] = pos3;
//            matrix[i][j] = pos4;
//        }
//    }
//
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            cout << matrix[i][j] << ",";
//        }
//        cout << endl;
//    }
//    }

    return 0;
}

