// Course:  CS213 - Programming II  - 2018
// Title:   Assignment II
// Program: CS213-2018-A2
// Purpose: Doing matrix operations by using class in separate folders
// Author1: Mostafa Khaled - 20170288 - G8
// Author2: Ola Sameh - 20170165 - G8
// Author3: Radwa Ahmed - 20170104 - G8

#include "matrix.h"
#include <bits/stdc++.h>

using namespace std;

//Takes rows and columns and data of a matrix and return them
istream& operator>> (istream& in, Matrix& mat)
{
    in >> mat.row >> mat.col;
    mat.data.resize(mat.row * mat.col);
    for(int i = 0; i < mat.row * mat.col; i++)
    {
        int x;
        in >> x;
        mat.data[i] = x;
    }

    return in;
}
// print matrix
ostream& operator<< (ostream& out, Matrix mat)
{
    int cnt = 0;
    for(int i=0; i < mat.row * mat.col; i++)
    {
        out << mat.data[i] << " ";
        cnt++;
        if(cnt == mat.col)
        {
            out << '\n';
            cnt = 0;
        }
    }
    return out;
}

int main()
{
    int data1 [] = {1,2,3,4,5,6,7,8};
    int data2 [] = {13,233,3,4,5,6};
    int data3 [] = {10,100,10,100,10,100,10,100};
    int data4 [] = {1,2,3,4,5,6,7,8};
    int data5 [] = {1,2,2,1};
    int data6 [] = {1,2,3,2,5,4,3,4,7};
    int data7 [] = {1,0,0,0,1,0,0,0,1};

    Matrix mat1(4, 2, data1);
    Matrix mat2(2, 3, data2);
    Matrix mat3(4, 2, data3);
    Matrix mat4(4, 2, data4);
    Matrix mat5(2, 2, data5);
    Matrix mat6 (3, 3, data6);
    Matrix mat7 (3, 3, data7);
    Matrix mat8;

    //cout << mat1 + mat3;

    //cout << mat3 - mat1;

    //cout << mat1 * mat2;

    //cout << mat1 + 3;

    //cout << mat2 - 3;

    //cout << mat3 * 3;

    /*mat1 += mat1;
    cout << mat1;*/

    /*mat1 -= mat1;
    cout << mat1;*/

    /*mat1 += 3;
    cout << mat1;*/

    /*mat2 -= 3;
    cout < <mat2;*/

    /*++mat1;
    cout << mat1;*/

    /*--mat1;
    cout << mat1;*/

    /*cin >> mat8;
    cout << mat8;*/

    //cout << (mat1 == mat4);

    //cout<< (mat1 != mat2);

    //cout<<mat7.isIdentity();

    //cout<<mat6.isSquare();

    //cout<<mat7.isSymetric();

    //cout << mat1.transpose();

    /*mat2 = mat3;
    cout<<mat2<<endl;*/

}
