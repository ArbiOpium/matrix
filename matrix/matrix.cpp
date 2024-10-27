#include<iostream>
#include "Matrix.h"
using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian");

    Matrix <Point> mat1(2, 2);
    mat1.Input();
    mat1.Print();

    return 0;
}