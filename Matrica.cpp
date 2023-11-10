//
//  main.cpp
//  Matrix
//
//  Created by Михаил on 10.11.2023.
//

#include <iostream>

using namespace std;

struct Matrix 
    {
    int** mmm = nullptr;
    size_t n_ = 0u;
    size_t m_ = 0u;
    };

void Construct(Matrix& MM, size_t n, size_t m);
void Destruct (Matrix& MM);
Matrix Copy (Matrix& matrix);
Matrix Sum (Matrix& M1, Matrix& M2);
Matrix Sub (Matrix& M1, Matrix& M2);
Matrix Mult (Matrix& M1, Matrix& M2);
void Transposition (Matrix& matrix);

int main() 
    {
    Matrix mat1, mat2;
    
    /*Construct(mat1, 2, 2);
    Construct(mat2, 2, 2);

    mat1.mmm[0][0] = 1;
    mat1.mmm[0][1] = 2;
    mat1.mmm[1][0] = 3;
    mat1.mmm[1][1] = 4;

    mat2.mmm[0][0] = 1;
    mat2.mmm[0][1] = 2;
    mat2.mmm[1][0] = 3;
    mat2.mmm[1][1] = 8;*/
    
    int a1, b1;
    cin >> a1 >> b1;
    
    Construct (mat1, a1, b1);
    
    int a2, b2;
    cin >> a2 >> b2;
    
    Construct (mat2, a2, b2);

    
    for (size_t i = 0; i < mat1.n_; ++i)
        {
        for (size_t j = 0; j < mat1.m_; ++j)
            {
            mat1.mmm[i][j] = rand()%50;
            }
        }
    
    for (size_t i = 0; i < mat1.n_; ++i)
        {
        for (size_t j = 0; j < mat1.m_; ++j)
            {
            cout << mat1.mmm[i][j] << " ";
            }
        cout << "\n";
        }
    
    cout << "\n";
    
    for (size_t i = 0; i < mat2.n_; ++i)
        {
        for (size_t j = 0; j < mat2.m_; ++j)
            {
            mat2.mmm[i][j] = rand()%50;
            }
        }
    
    for (size_t i = 0; i < mat2.n_; ++i)
        {
        for (size_t j = 0; j < mat2.m_; ++j)
            {
            cout << mat2.mmm[i][j] << " ";
            }
        cout << "\n";
        }
    
    cout << "\n";

    Matrix Summma = Sum (mat1, mat2);
    Matrix Raznica = Sub (mat1, mat2);
    Matrix Peremnozhenie = Mult(mat1, mat2);

    cout << "Результат сложения:\n";
    
    for (size_t i = 0; i < Summma.n_; ++i)
        {
        for (size_t j = 0; j < Summma.m_; ++j) 
            {
            cout << Summma.mmm[i][j] << " ";
            }
        cout << "\n";
        }

    cout << "Результат разницы:\n";
    
    for (size_t i = 0; i < Raznica.n_; ++i)
        {
        for (size_t j = 0; j < Raznica.m_; ++j)
            {
            cout << Raznica.mmm[i][j] << " ";
            }
        cout << "\n";
        }

    cout << "Результат умножения:\n";
    
    for (size_t i = 0; i < Peremnozhenie.n_; ++i)
        {
        for (size_t j = 0; j < Peremnozhenie.m_; ++j)
            {
            cout << Peremnozhenie.mmm[i][j] << " ";
            }
        cout << "\n";
        }

    Destruct(mat1);
    Destruct(mat2);
    Destruct(Summma);
    Destruct(Raznica);
    Destruct(Peremnozhenie);

    return 0;
    }

void Construct(Matrix& MM, size_t n, size_t m)
    {
    MM.n_ = n;
    MM.m_ = m;
    MM.mmm = new int*[n];
    
    for (size_t i = 0; i < n; ++i)
        {
        MM.mmm[i] = new int[m]();
        }
    }

void Destruct (Matrix& MM)
    {
    for (size_t i = 0; i < MM.n_; ++i)
        {
        delete[] MM.mmm[i];
        }
    }

Matrix Copy (Matrix& MM)
    {
    Matrix copy;
    Construct (copy, MM.n_, MM.m_);
    for (size_t i = 0; i < MM.n_; ++i)
        {
        for (size_t j = 0; j < MM.m_; ++j)
            {
            copy.mmm[i][j] = MM.mmm[i][j];
            }
        }
    return copy;
    }

Matrix Sum (Matrix& M1, Matrix& M2)
    {
    if (M1.n_ != M2.n_ || M1.m_ != M2.m_)
        {
        Matrix Null;
        return Null;
        }
    
    Matrix result;
    Construct(result, M1.n_, M2.m_);
    
    for (size_t i = 0; i < M1.n_; ++i)
        {
        for (size_t j = 0; j < M1.m_; ++j)
            {
            result.mmm[i][j] = M1.mmm[i][j] + M2.mmm[i][j];
            }
        }
    return result;
    }

Matrix Sub (Matrix& M1, Matrix& M2)
    {
    if (M1.n_ != M2.n_ || M1.m_ != M2.m_)
        {
        Matrix Null;
        return Null;
        }
    
    Matrix result;
    Construct(result, M1.n_, M2.m_);
    
    for (size_t i = 0; i < M1.n_; ++i)
        {
        for (size_t j = 0; j < M1.m_; ++j)
            {
            result.mmm [i][j] = M1.mmm[i][j] - M2.mmm[i][j];
            }
        }
    return result;
    }

Matrix Mult (Matrix& M1, Matrix& M2)
    {
    if (M1.m_ != M2.n_)
        {
        Matrix Null;
        return Null;
        }
    
    Matrix result;
    Construct(result, M1.n_, M2.m_);
    
    for (size_t i = 0; i < M1.n_; ++i)
        {
        for (size_t j = 0; j < M2.m_; ++j)
            {
            result.mmm[i][j] = 0;
            for (size_t k = 0; k < M1.m_; ++k)
                {
                result.mmm[i][j] += M1.mmm[i][k] * M2.mmm[k][j];
                }
            }
        }
    return result;
    }

void Transposition (Matrix& matrix) 
    {
    Matrix NewT;
    Construct(NewT, matrix.m_, matrix.n_);
    
    for (size_t i = 0; i < matrix.n_; ++i)
        {
        for (size_t j = 0; j < matrix.m_; ++j) 
            {
            NewT.mmm[j][i] = matrix.mmm[i][j];
            }
        }
    
    Destruct(matrix);
    matrix = NewT;
    }
