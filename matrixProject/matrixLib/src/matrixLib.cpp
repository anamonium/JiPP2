#include <iostream>
using namespace std;

//dla macierzy alokowana jest pamiec, przypadek dla int oraz double ponizej
int **create_matrix(int rows, int columns)
{
    int **tmp_matrix = new int *[rows];

    for (int i = 0; i < rows; i++)
    {
        tmp_matrix[i] = new int[columns];
    }

    return tmp_matrix;
}

double **create_matrix_d(int rows, int columns)
{
    double **tmp_matrix = new double *[rows];

    for (int i = 0; i < rows; i++)
    {
        tmp_matrix[i] = new double[columns];
    }

    return tmp_matrix;
}

//pozwala uzytkownikowy wpisac wartosci do macierzy
int  **fill_matrix(int **matrix, int rows, int columns)
{

    for (int i = 0; i < rows; ++i)
    {
        cout<<"Podaj "<<columns<<" wartości dla "<<i+1<<" rzedu\n";
        for (int j = 0; j < columns; ++j)
        {
            cin >> matrix[i][j];
        }
    }
    return matrix;
}

double  **fill_matrix(double **matrix, int rows, int columns)
{
    for (int i = 0; i < rows; ++i)
    {
        cout<<"Podaj "<<columns<<" wartości dla "<<i+1<<" rzedu\n";
        for (int j = 0; j < columns; ++j)
        {
            cin >> matrix[i][j];
        }
    }
    return matrix;
}

//wyswietla macierz na ekranie
void print_matrix(int **matrix, int rows, int columns)
{
    cout<<"\n\nMacierz wynikowa: \n";
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            cout << " " << matrix[i][j] << "\t";
        }

        cout << "\n";
    }
}

void print_matrix(double **matrix, int rows, int columns)
{

    cout<<"\n\nMacierz wynikowa: \n";
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            cout << " " << matrix[i][j] << "\t";
        }

        cout << "\n";
    }
}

//zwalnia pamiec wczensiej zaalokowanej macierzy
void free_matrix(int **matrix, int rows)
{
    for(int i=0;i<rows;++i)
    {
        delete[] matrix[i];
        matrix[i] = NULL;
    }

    delete [] matrix;
    matrix=NULL;
}

void free_matrix(double **matrix, int rows)
{
    for(int i=0;i<rows;++i)
    {
        delete[] matrix[i];
        matrix[i] = NULL;
    }

    delete [] matrix;
    matrix=NULL;
}

//funkcja dodajaca do siebie dwie macierze
int **addMatrix(int **matrix_a, int **matrix_b, int rows, int columns)
{
    int **result_matrix = create_matrix(rows, columns);

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
            result_matrix[i][j] = matrix_a[i][j] + matrix_b[i][j];
    }

    return result_matrix;
}

double **addMatrix(double **matrix_a, double **matrix_b, int rows, int columns)
{
    double **result_matrix = create_matrix_d(rows, columns);

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
            result_matrix[i][j] = matrix_a[i][j] + matrix_b[i][j];
    }

    return result_matrix;
}

//funkcja odejmujaca od siebie dwie macierze
int **subtractMatrix(int **matrix_a, int **matrix_b, int rows, int columns)
{
    int **matrix=create_matrix(rows,columns);

    for(int i=0;i<rows;++i)
    {
        for(int j=0;j<columns;++j)
            matrix[i][j]=matrix_a[i][j]-matrix_b[i][j];
    }
    return matrix;
}

double **subtractMatrix(double **matrix_a, double **matrix_b, int rows, int columns)
{
    double **matrix=create_matrix_d(rows,columns);

    for(int i=0;i<rows;++i)
    {
        for(int j=0;j<columns;++j)
            matrix[i][j]=matrix_a[i][j]-matrix_b[i][j];
    }
    return matrix;
}

//funckja mnozaca pierwsza macierz przez druga
int **multiplyMatrix(int **matrix_a, int **matrix_b, int rows_a, int columns_a, int columns_b)
{
    int **matrix=create_matrix(rows_a,columns_b);
    int tmp=0;
    for(int i=0;i<rows_a;++i)
    {
        for(int j=0;j<columns_b;++j)
        {
            for(int m=0;m<columns_a;++m)
                tmp +=matrix_a[i][m]*matrix_b[m][j];
            matrix[i][j]=tmp;
            tmp=0;
        }
    }
    return matrix;
}

double **multiplyMatrix(double **matrix_a, double **matrix_b, int rows_a, int columns_a, int columns_b)
{
    double **matrix=create_matrix_d(rows_a,columns_b);
    double tmp=0;
    for(int i=0;i<rows_a;++i)
    {
        for(int j=0;j<columns_b;++j)
        {
            for(int m=0;m<columns_a;++m)
                tmp +=matrix_a[i][m]*matrix_b[m][j];
            matrix[i][j]=tmp;
            tmp=0;
        }
    }
    return matrix;
}

//funckja mnozaca macierz przez skalar
int **multiplyByScalar(int **matrix_a, int rows, int columns, int scalar)
{
    int **matrix=create_matrix(rows,columns);
    for(int i=0;i<rows;++i)
    {
        for(int j=0;j<columns;++j)
            matrix[i][j]=matrix_a[i][j]*scalar;
    }

    return matrix;
}

double **multiplyByScalar(double **matrix_a, int rows, int columns, double scalar)
{
    double **matrix=create_matrix_d(rows,columns);
    for(int i=0;i<rows;++i)
    {
        for(int j=0;j<columns;++j)
            matrix[i][j]=matrix_a[i][j]*scalar;
    }

    return matrix;
}

//funckja transponujaca macierz
int **transpozeMatrix(int **matrix_a, int rows, int columns)
{
    int **matrix=create_matrix(columns, rows);
    for(int i=0;i<rows;++i)
    {
        for(int j=0;j<columns;++j)
            matrix[j][i]=matrix_a[i][j];
    }

    return matrix;
}

double **transpozeMatrix(double **matrix_a, int rows, int columns)
{
    double **matrix=create_matrix_d(columns, rows);
    for(int i=0;i<rows;++i)
    {
        for(int j=0;j<columns;++j)
            matrix[j][i]=matrix_a[i][j];
    }

    return matrix;
}

//funckja podnoszaca macierz do potegi
int **powerMatrix(int **matrix_a, int rows, int columns, unsigned int power)
{
    int **matrix=create_matrix(columns, rows);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j)
            matrix[i][j] = matrix_a[i][j];
    }

    for (int i = 0; i < power - 1; ++i) {
        matrix = multiplyMatrix(matrix, matrix_a, rows, columns, columns);
    }

    return matrix;
}

double **powerMatrix(double **matrix_a, int rows, int columns, unsigned int power)
{
    double **matrix=create_matrix_d(columns, rows);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j)
            matrix[i][j] = matrix_a[i][j];
    }

    for (int i = 0; i < power - 1; ++i) {
        matrix = multiplyMatrix(matrix, matrix_a, rows, columns, columns);
    }

    return matrix;
}

int **submatrix(int **matrix, int p, int q, int n)
{
    int i = 0, j = 0;
    //tworzymy podmacierz glownej macierzy
    int **result_matrix = create_matrix(n,n);

    for (int row = 0; row < n; ++row)
    {
        for (int col = 0; col < n; ++col)
        {
            if (row != p && col != q)
            {
                result_matrix[i][j++] = matrix[row][col];
                if (j == n - 1)
                {
                    j = 0;
                    i++;
                }
            }
        }
    }

    return result_matrix;
}

double **submatrix(double **matrix, int p, int q, int n)
{
    int i = 0, j = 0;
    double **result_matrix = create_matrix_d(n, n);
    //wypelnienie podmacierzy
    for (int row = 0; row < n; ++row)
    {
        for (int col = 0; col < n; ++col)
        {
            if (row != p && col != q)
            {
                result_matrix[i][j++] = matrix[row][col];
                if (j == n - 1)
                {
                    j = 0;
                    i++;
                }
            }
        }
    }

    return result_matrix;
}

int determinantMatrix(int **matrix, int rows, int columns)
{
    //przypadki podstawowe, gdzie odpowiedz jest od razu wiadoma
    if (rows == 1)
        return matrix[0][0];

    else if (rows == 2)
        return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);

    else
    {
        //inicjujemy zmienne do znaku, wyniku oraz podmacierz
        int result = 0, sign = 1;
        int **temp_matrix = nullptr;

        //szukanie podmacierzy
        for (int i = 0; i < rows; ++i)
        {
            temp_matrix = submatrix(matrix, 0, i, rows);
            result += sign * matrix[0][i] * determinantMatrix(temp_matrix, rows - 1, columns - 1);
            sign = -sign;
        }

        return result;
    }
}

double determinantMatrix(double **matrix, int rows, int columns)
{
    if (rows == 1)
        return matrix[0][0];

    else if (rows == 2)
        return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);

    else
    {
        double result = 0., sign = 1.;
        double **temp_matrix = nullptr;

        for (int i = 0; i < rows; ++i)
        {
            temp_matrix = submatrix(matrix, 0, i, rows);
            result += sign * matrix[0][i] * determinantMatrix(temp_matrix, rows - 1, columns - 1);
            sign = -sign;
        }

        return result;
    }
}

//sprawdzenie czy macierz jest diagonalna
bool matrixIsDiagonal(int **matrix_a,int rows, int columns)
{
    if(rows!=columns)
        return false;

    for(int i=0;i<rows;++i)
    {
        for(int j=0;j<columns;++j)
        {
            if(i!=j && matrix_a[i][j]!=0)
                return false;
        }
    }

    return true;
}

bool matrixIsDiagonal(double **matrix_a,int rows, int columns)
{
    if(rows!=columns)
        return false;

    for(int i=0;i<rows;++i)
    {
        for(int j=0;j<columns;++j)
        {
            if(i!=j && matrix_a[i][j]!=0)
                return false;
        }
    }

    return true;
}

//funkcja zamieniajaca elementy (poprzez referencje)
void swap(int &a, int &b)
{
    int tmp=a;
    a=b;
    b=tmp;
}

void swap(double &a, double &b)
{
    double tmp=a;
    a=b;
    b=tmp;
}

//funckja sortujaca tablice jednowymiarowa
void sortRow(int *row, int columns)
{
    for(int i=0;i<columns-1;++i)
    {
        for(int j=0;j<columns-i-1;++j)
        {
            if(row[j]>row[j+1])
                swap(row[j],row[j+1]);
        }
    }
}

void sortRow(double *row, int columns)
{
    for(int i=0;i<columns-1;++i)
    {
        for(int j=0;j<columns-i-1;++j)
        {
            if(row[j]>row[j+1])
                swap(row[j],row[j+1]);
        }
    }
}

//funckja sortujaca wiersze w macierzy
int **sortRowsInMatrix(int **matrix_a, int rows, int columns)
{
    for(int i=0;i<rows;++i)
        sortRow(matrix_a[i],columns);

    return matrix_a;
}

double **sortRowsInMatrix(double **matrix_a, int rows, int columns)
{
    for(int i=0;i<rows;++i)
        sortRow(matrix_a[i],columns);

    return matrix_a;
}

//wysietlenie instrukcji obslugi
void help()
{
    cout<<"\n\tINSTRUCKJA OBSLUGI PROGRAMU matrixApp\n\n"
        <<"[addMatrix]\n\tdodawanie dwoch macierzy o takiej samej ilosci kolumn i wierszy\n\n "
        <<"[subtractMatrix]\n\todejmowanie dwoch macierzy o takiej samej ilosci kolumn i wierszy\n\n"
        <<"[multiplyMatrix]\n\tmnozenie dwoch macierzy, ilosc wierszy pierwszej macierzy musi byc rowna ilosci kolumn drugiej macierzy\n\n"
        <<"[multiplyByScalar]\n\tmnozenie macierzy przez skalar\n\n"
        <<"[transpozeMatrix]\n\ttransponowanie macierzy\n\n"
        <<"[powerMatrix]\n\tpodnoszenie macierzy do potegi, tylko macierz kwadratowa\n\n"
        <<"[determinantMatrix]\n\toblicza wyznacznik macierzy, tylko macierz kwadratowa\n\n"
        <<"[matrixIsDiagonal]\n\tsprawdza czy macierz jest diagonalna, tylko macierz kwadratowa\n\n"
        <<"[sortRowsInMatrix]\n\tsortowanie wszystkich wierszy macierzy\n\n";
}
