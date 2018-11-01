#ifndef MATRIX_H
#define MATRIX_H

#include <bits/stdc++.h>

using namespace std;

class Matrix
{
    friend istream& operator>> (istream&, Matrix&);
    friend ostream& operator<< (ostream& out, Matrix mat);
public:
    Matrix operator+ (Matrix&);     //add two matrices
    Matrix operator- (Matrix&);     //subtract two matrices
    Matrix operator* (Matrix&);     //multiply two matrices
    Matrix operator+ (int scalar);  // add number to matrix
    Matrix operator- (int scalar);  // Subtract a scalar
    Matrix operator* (int scalar);  // Multiply by scalar
    Matrix operator+= (Matrix&);    // mat1 changes and return new matrix with the sum
    Matrix operator-= (Matrix&);    // mat1 changes and return new matrix with difference
    Matrix operator+= (int scalar); // change mat & return new matrix
    Matrix operator-= (int scalar); // change mat & return new matrix
    Matrix operator=  (Matrix&);    //copy another matrix to the current matrix
    void operator++();              // Add 1 to each element in the matrix
    void operator--();              // subtract 1 to each element in the matrix
    bool operator== (Matrix);	    // True if equal
    bool operator!= (Matrix);       //true if not equal
    bool isSquare();                //true if the matrix square
    bool isSymetric();              //true if the matrix symetric
    Matrix transpose();             //transpose the matrix
    bool isIdentity();              //true if the matrix identity
    Matrix();                       //default constructor
    Matrix(int row, int col, int num[]);  //to write the data of the matrix
    Matrix(int row, int col, valarray<int>&);
    Matrix(const Matrix&);  //copy constructor
    void setRow(int);
    void setCol(int);
    int getRow();
    int getCol();
    int getData(int);
    void setData(int[], int);

private:
    valarray<int> data;
    int row, col;

};

#endif // MATRIX_H
