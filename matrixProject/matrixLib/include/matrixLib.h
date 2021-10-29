#ifndef JIPP2_MATRIXLIB_H
#define JIPP2_MATRIXLIB_H
#include <iostream>
using namespace std;


int **create_matrix(int rows, int columns);

double **create_matrix_d(int rows, int columns);

int  **fill_matrix(int **matrix, int rows, int columns);

double  **fill_matrix(double **matrix, int rows, int columns);

void print_matrix(int **matrix, int rows, int columns);

void print_matrix(double **matrix, int rows, int columns);

void free_matrix(int **matrix, int rows);

void free_matrix(double **matrix, int rows);

int **addMatrix(int **matrix_a, int **matrix_b, int rows, int columns);

double **addMatrix(double **matrix_a, double **matrix_b, int rows, int columns);

int **subtractMatrix(int **matrix_a, int **matrix_b, int rows, int columns);

double **subtractMatrix(double **matrix_a, double **matrix_b, int rows, int columns);

int **multiplyMatrix(int **matrix_a, int **matrix_b, int rows_a, int columns_a, int columns_b);

double **multiplyMatrix(double **matrix_a, double **matrix_b, int rows_a, int columns_a, int columns_b);

int **multiplyByScalar(int **matrix_a, int rows, int columns, int scalar);

double **multiplyByScalar(double **matrix_a, int rows, int columns, int scalar);

int **transpozeMatrix(int **matrix_a, int rows, int columns);

double **transpozeMatrix(double **matrix_a, int rows, int columns);

int **powerMatrix(int **matrix_a, int rows, int columns, unsigned int power);

double **powerMatrix(double **matrix_a, int rows, int columns, unsigned int power);

int **submatrix(int **matrix, int row_index, int column_index, int matrix_size);

double **submatrix(double **matrix, int row_index, int column_index, int matrix_size);

int determinantMatrix(int **matrix, int rows, int columns);

double determinantMatrix(double **matrix, int rows, int columns);

bool matrixIsDiagonal(int **matrix_a,int rows, int columns);

bool matrixIsDiagonal(double **matrix_a,int rows, int columns);

void swap(int &a, int &b);

void swap(double &a, double &b);

void sortRow(int *row, int columns);

void sortRow(double *row, int columns);

int **sortRowsInMatrix(int **matrix_a, int rows, int columns);

double **sortRowsInMatrix(double **matrix_a, int rows, int columns);

void help();
#endif //JIPP2_MATRIXLIB_H
