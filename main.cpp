#include <iostream>
#include "matrix.h"

using namespace std;

int main(){

    Matrix matrix;
//    for(int i = 0; i < 100000000; i++){
//        matrix.rotateClockwise();
//        }
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
            cout << "How many times do you want to rotate the matrix?" << endl;
            int rotate;
            cin >> rotate;
            for(int i = 0; i < rotate; i++){
                matrix.rotateCounterClockwise();
                matrix.write();
                cout << endl;
            }
        }else if(direction == 'r' || direction == 'R'){
            cout << "How many times do you want to rotate the matrix?" << endl;
            int rotate;
            cin >> rotate;
            for(int i = 0; i < rotate; i++){
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
    return 0;
}

