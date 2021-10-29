#include "../matrixLib/include/matrixLib.h"

int main(int argc, char **argv)
{
    string operation;
    int rodzaj;
    operation=argv[1];


    if(operation=="help")
    {
        help();
        return 0;
    }

    //sprawdzenie czy podana operacja jest poprawna, jezeli nie jest to nie ma sensu sprawdzac
    //wszystkich przypadkow, tylko od razu wyswietlic dokumentacje
    if(operation!="addMatrix"&&operation!="subtractMatrix"&&operation!="multiplyMatrix"&&
       operation!="multiplyByScalar"&&operation!="transpozeMatrix"&&
       operation!="powerMatrix"&&operation!="determinantMatrix"&&
       operation!="matrixIsDiagonal"&&operation!="sortRowsInMatrix"
       &&operation!="help")
    {
        cout<<"Podano niepoprawna operację!\nInstrukcja obslugi: \n";
        help();
        exit(1);
    }

    cout<<"W jakich liczbach chcesz wykonywac obliczenia:"
        <<"\n1 - int\n"
        <<"2 - double\n";
    cin>>rodzaj;


    //operacje na int
    if(rodzaj==1)
    {
        int **matrix_a= nullptr;
        int rows_a, columns_a;
        cout<<"Podaj wymiery macierzy A :\n Wiersze = ";
        cin>>rows_a;
        cout<<" Kolumny = ";
        cin>>columns_a;

        //jezeli wymiary macierzy sa ujemne, wyswietlany jest blad
        try{
            if(rows_a<1||columns_a<1)
                throw "Wymiary macierzy musza byc dodatnie!";
        }
        catch(const char* message)
        {
            cout << message << endl;
            exit(1);
        }

        //dodawanie dwoch macierzy
        if(operation=="addMatrix")
        {
            int **result_matrix=nullptr, **matrix_b=nullptr;
            int rows_b, columns_b;
            cout<<"Podaj wymiery macierzy B :\n Wiersze = ";
            cin>>rows_b;
            cout<<" Kolumny = ";
            cin>>columns_b;

            try{
                if(rows_b<1||columns_b<1)
                    throw "Wymiary macierzy musza byc dodatnie!";
            }
            catch(const char* message)
            {
                cout << message << endl;
                exit(1);
            }

            try{
                if(rows_a!=rows_b || columns_a!=columns_b)
                    throw "Nie mozna dodawac macierzy o innych wymiarach";

                //jezeli warunek w if jest spelniony to przechodzi do ponizszych operacji
                cout<<"Podaj wartosci znajdujace sie w macierzy A : \n";
                matrix_a= create_matrix(rows_a,columns_a); //zainicjowanie pamieci dla macierzy A
                matrix_a= fill_matrix(matrix_a,rows_a,columns_a); //wypelnienie macierzy A

                cout<<"Podaj wartosci znajdujace sie w macierzy B : \n";
                matrix_b= create_matrix(rows_b,columns_b);
                matrix_b= fill_matrix(matrix_b,rows_b,columns_b);

                result_matrix= addMatrix(matrix_a,matrix_b,rows_a, columns_a);
                print_matrix(result_matrix,rows_a,columns_a);
                free_matrix(matrix_a,rows_a);
                free_matrix(matrix_b,rows_b);
                free_matrix(result_matrix,rows_a); //zwolnienie pamieci wszystkich zainicjowanych wczesniej macierzy
            }
            catch(const char* message)
            {
                cout << message << endl;
                exit(1);
            }

        }

        //odejmowanie dwoch macierzy
        else if(operation=="subtractMatrix")
        {
            int **result_matrix=nullptr, **matrix_b=nullptr;
            int rows_b, columns_b;
            cout<<"Podaj wymiery macierzy B :\n Wiersze = ";
            cin>>rows_b;
            cout<<" Kolumny = ";
            cin>>columns_b;

            try{
                if(rows_b<1||columns_b<1)
                    throw "Wymiary macierzy musza byc dodatnie!";
            }
            catch(const char* message)
            {
                cout << message << endl;
                exit(1);
            }

            try{
                if(rows_a!=rows_b || columns_a!=columns_b)
                    throw "Nie mozna odejmowac macierzy o innych wymiarach";
                cout<<"Podaj wartosci znajdujace sie w macierzy A : \n";
                matrix_a= create_matrix(rows_a,columns_a);
                matrix_a= fill_matrix(matrix_a,rows_a,columns_a);

                cout<<"Podaj wartosci znajdujace sie w macierzy B : \n";
                matrix_b= create_matrix(rows_b,columns_b);
                matrix_b= fill_matrix(matrix_b,rows_b,columns_b);

                result_matrix= subtractMatrix(matrix_a,matrix_b,rows_a, columns_a);
                print_matrix(result_matrix,rows_a,columns_a);
                free_matrix(matrix_a,rows_a);
                free_matrix(matrix_b,rows_b);
                free_matrix(result_matrix,rows_a);
            }
            catch(const char* message)
            {
                cout << message << endl;
                exit(1);
            }
        }

        //mnozenie dwoch macierzy
        else if(operation=="multiplyMatrix")
        {
            int **result_matrix=nullptr, **matrix_b=nullptr;
            int rows_b, columns_b;
            cout<<"Podaj wymiery macierzy B :\n Wiersze = ";
            cin>>rows_b;
            cout<<" Kolumny = ";
            cin>>columns_b;

            try{
                if(rows_b<1||columns_b<1)
                    throw "Wymiary macierzy musza byc dodatnie!";
            }
            catch(const char* message)
            {
                cout << message << endl;
                exit(1);
            }

            try{
                if(columns_a!=rows_b)
                    throw "Mozna mnozyc macierze tylko jezeli ilosc kolumn pierwszej macierzy jest rowna ilosci wierszy drugiej!\n";
                cout<<"Podaj wartosci znajdujace sie w macierzy A : \n";
                matrix_a= create_matrix(rows_a,columns_a);
                matrix_a= fill_matrix(matrix_a,rows_a,columns_a);

                cout<<"Podaj wartosci znajdujace sie w macierzy B : \n";
                matrix_b= create_matrix(rows_b,columns_b);
                matrix_b= fill_matrix(matrix_b,rows_b,columns_b);

                result_matrix= multiplyMatrix(matrix_a,matrix_b,rows_a,columns_a,columns_b);
                print_matrix(result_matrix,rows_a,columns_b);
                free_matrix(matrix_a,rows_a);
                free_matrix(matrix_b,rows_b);
                free_matrix(result_matrix,rows_a);
            }
            catch(const char* message)
            {
                cout << message << endl;
                exit(1);
            }

        }

        //mnozenie macierzy przez skalar
        else if(operation=="multiplyByScalar")
        {
            int scalar;
            int **result_matrix= nullptr;
            cout<<"Podaj wartosci znajdujace sie w macierzy A : \n";
            matrix_a= create_matrix(rows_a,columns_a);
            matrix_a= fill_matrix(matrix_a,rows_a,columns_a);
            cout<<"Przez jaki skalar chcesz pomnozyc macierz?\n skalar = ";
            cin>>scalar;
            result_matrix= multiplyByScalar(matrix_a,rows_a,columns_a,scalar);
            print_matrix(result_matrix,rows_a,columns_a);
            free_matrix(matrix_a,rows_a);
            free_matrix(result_matrix,rows_a);

        }

        //transpozycja macierzy
        else if(operation=="transpozeMatrix")
        {
            int **result_matrix= nullptr;
            cout<<"Podaj wartosci znajdujace sie w macierzy A : \n";
            matrix_a= create_matrix(rows_a,columns_a);
            matrix_a= fill_matrix(matrix_a,rows_a,columns_a);
            result_matrix= transpozeMatrix(matrix_a,rows_a,columns_a);
            print_matrix(result_matrix,columns_a,rows_a);
            free_matrix(matrix_a,rows_a);
            free_matrix(result_matrix,rows_a);
        }

        //podnoszenie macierzy do potegi
        else if(operation=="powerMatrix")
        {
            int power;
            int **result_matrix= nullptr;
            cout<<"Do jakiej potegi chcesz podniesc macierz?\n potega = ";
            cin>>power;

            if(power<1)
            {
                cout<<"Nie mozna wykonac operacji\n";
                exit(1);
            }

            try{
                if(rows_a!=columns_a)
                    throw "Do potegi mozna podniesc tylko macierz kwadratowa!";
                cout<<"Podaj wartosci znajdujace sie w macierzy A : \n";
                matrix_a= create_matrix(rows_a,columns_a);
                matrix_a= fill_matrix(matrix_a,rows_a,columns_a);
                result_matrix= powerMatrix(matrix_a,rows_a,columns_a,power);
                print_matrix(result_matrix,rows_a,columns_a);
                free_matrix(matrix_a,rows_a);
                free_matrix(result_matrix,rows_a);
            }
            catch(const char* message)
            {
                cout << message << endl;
                exit(1);
            }
        }

        //wyliczanie wyznacznika macierzy
        else if(operation=="determinantMatrix")
        {
            int a;
            cout<<"Podaj wartosci znajdujace sie w macierzy A : \n";
            matrix_a= create_matrix(rows_a,columns_a);
            matrix_a= fill_matrix(matrix_a,rows_a,columns_a);
            a= determinantMatrix(matrix_a,rows_a,columns_a);
            cout<<"Wyznacznik macierzy A wynosi: "<<a<<"\n";
        }

        //sprawdzenie czy macierz jest diagonalna
        else if(operation=="matrixIsDiagonal")
        {
            bool result = false;
            cout<<"Podaj wartosci znajdujace sie w macierzy A : \n";
            matrix_a= create_matrix(rows_a,columns_a);
            matrix_a= fill_matrix(matrix_a,rows_a,columns_a);
            result = matrixIsDiagonal(matrix_a, rows_a, columns_a);

            if (result)
                cout << "Podana macierz jest diagonalna\n" << endl;
            else
                cout << "Podana macierz nie jest diagonalna\n" << endl;

            free_matrix(matrix_a,rows_a);
        }

        //posortowanie wierszy w macierzy
        else if(operation=="sortRowsInMatrix")
        {
            cout<<"Podaj wartosci znajdujace sie w macierzy A : \n";
            matrix_a= create_matrix(rows_a,columns_a);
            matrix_a= fill_matrix(matrix_a,rows_a,columns_a);
            sortRowsInMatrix(matrix_a,rows_a,columns_a);
            print_matrix(matrix_a,rows_a,columns_a);
            free_matrix(matrix_a,rows_a);
        }

    }

    //operacje takie same jak wyzej, tylko na liczbach typu double
    else if(rodzaj==2)
    {
        double **matrix_a= nullptr;
        int rows_a, columns_a;
        cout<<"Podaj wymiery macierzy A :\n Wiersze = ";
        cin>>rows_a;
        cout<<" Kolumny = ";
        cin>>columns_a;

        try{
            if(rows_a<1||columns_a<1)
                throw "Wymiary macierzy musza byc dodatnie!";
        }
        catch(const char* message)
        {
            cout << message << endl;
            exit(1);
        }

        if(operation=="addMatrix")
        {
            double **result_matrix=nullptr, **matrix_b=nullptr;
            int rows_b, columns_b;
            cout<<"Podaj wymiery macierzy B :\n Wiersze = ";
            cin>>rows_b;
            cout<<" Kolumny = ";
            cin>>columns_b;

            try{
                if(rows_b<1||columns_b<1)
                    throw "Wymiary macierzy musza byc dodatnie!";
            }
            catch(const char* message)
            {
                cout << message << endl;
                exit(1);
            }

            try{
                if(rows_a!=rows_b || columns_a!=columns_b)
                    throw "Nie mozna dodawac macierzy o innych wymiarach";
                cout<<"Podaj wartosci znajdujace sie w macierzy A : \n";
                matrix_a= create_matrix_d(rows_a,columns_a);
                matrix_a= fill_matrix(matrix_a,rows_a,columns_a);

                cout<<"Podaj wartosci znajdujace sie w macierzy B : \n";
                matrix_b= create_matrix_d(rows_b,columns_b);
                matrix_b= fill_matrix(matrix_b,rows_b,columns_b);
                result_matrix= addMatrix(matrix_a,matrix_b,rows_a, columns_a);
                print_matrix(result_matrix,rows_a,columns_a);
                free_matrix(matrix_a,rows_a);
                free_matrix(matrix_b,rows_b);
                free_matrix(result_matrix,rows_a);
            }
            catch(const char* message)
            {
                cout << message << endl;
                exit(1);
            }
        }
        else if(operation=="subtractMatrix")
        {
            double **result_matrix=nullptr, **matrix_b=nullptr;
            int rows_b, columns_b;
            cout<<"Podaj wymiery macierzy B :\n Wiersze = ";
            cin>>rows_b;
            cout<<" Kolumny = ";
            cin>>columns_b;

            try{
                if(rows_b<1||columns_b<1)
                    throw "Wymiary macierzy musza byc dodatnie!";
            }
            catch(const char* message)
            {
                cout << message << endl;
                exit(1);
            }

            try{
                if(rows_a!=rows_b || columns_a!=columns_b)
                    throw "Nie mozna odejmowac macierzy o innych wymiarach";
                cout<<"Podaj wartosci znajdujace sie w macierzy A : \n";
                matrix_a= create_matrix_d(rows_a,columns_a);
                matrix_a= fill_matrix(matrix_a,rows_a,columns_a);

                cout<<"Podaj wartosci znajdujace sie w macierzy B : \n";
                matrix_b= create_matrix_d(rows_b,columns_b);
                matrix_b= fill_matrix(matrix_b,rows_b,columns_b);
                result_matrix= subtractMatrix(matrix_a,matrix_b,rows_a, columns_a);
                print_matrix(result_matrix,rows_a,columns_a);
                free_matrix(matrix_a,rows_a);
                free_matrix(matrix_b,rows_b);
                free_matrix(result_matrix,rows_a);
            }
            catch(const char* message)
            {
                cout << message << endl;
                exit(1);
            }
        }
        else if(operation=="multiplyMatrix")
        {
            double **result_matrix=nullptr, **matrix_b=nullptr;
            int rows_b, columns_b;
            cout<<"Podaj wymiery macierzy B :\n Wiersze = ";
            cin>>rows_b;
            cout<<" Kolumny = ";
            cin>>columns_b;

            try{
                if(rows_b<1||columns_b<1)
                    throw "Wymiary macierzy musza byc dodatnie!";
            }
            catch(const char* message)
            {
                cout << message << endl;
                exit(1);
            }

            try{
                if(columns_a!=rows_b)
                    throw "Mozna mnozyc macierze tylko jezeli ilosc kolumn pierwszej macierzy jest rowna ilosci wierszy drugiej!\n";
                cout<<"Podaj wartosci znajdujace sie w macierzy A : \n";
                matrix_a= create_matrix_d(rows_a,columns_a);
                matrix_a= fill_matrix(matrix_a,rows_a,columns_a);

                cout<<"Podaj wartosci znajdujace sie w macierzy B : \n";
                matrix_b= create_matrix_d(rows_b,columns_b);
                matrix_b= fill_matrix(matrix_b,rows_b,columns_b);
                result_matrix= multiplyMatrix(matrix_a,matrix_b,rows_a,columns_a,columns_b);
                print_matrix(result_matrix,rows_a,columns_b);
                free_matrix(matrix_a,rows_a);
                free_matrix(matrix_b,rows_b);
                free_matrix(result_matrix,rows_a);
            }
            catch(const char* message)
            {
                cout << message << endl;
                exit(1);
            }
        }
        else if(operation=="multiplyByScalar")
        {
            double scalar;
            double **result_matrix= nullptr;
            cout<<"Podaj wartosci znajdujace sie w macierzy A : \n";
            matrix_a= create_matrix_d(rows_a,columns_a);
            matrix_a= fill_matrix(matrix_a,rows_a,columns_a);

            cout<<"Przez jaki skalar chcesz pomnozyc macierz?\n skalar = ";
            cin>>scalar;
            result_matrix= multiplyByScalar(matrix_a,rows_a,columns_a,scalar);
            print_matrix(result_matrix,rows_a,columns_a);
            free_matrix(matrix_a,rows_a);
            free_matrix(result_matrix,rows_a);

        }
        else if(operation=="transpozeMatrix")
        {
            double **result_matrix= nullptr;
            cout<<"Podaj wartosci znajdujace sie w macierzy A : \n";
            matrix_a= create_matrix_d(rows_a,columns_a);
            matrix_a= fill_matrix(matrix_a,rows_a,columns_a);

            result_matrix= transpozeMatrix(matrix_a,rows_a,columns_a);
            print_matrix(result_matrix,columns_a,rows_a);
            free_matrix(matrix_a,rows_a);
            free_matrix(result_matrix,rows_a);
        }
        else if(operation=="powerMatrix")
        {
            int power;
            double **result_matrix= nullptr;
            cout<<"Do jakiej potegi chcesz podniesc macierz?\n potega = ";
            cin>>power;

            if(power<1)
            {
                cout<<"Nie mozna wykonac operacji\n";
                exit(1);
            }

            try{
                if(rows_a!=columns_a)
                    throw "Do potegi mozna podniesc tylko macierz kwadratowa!";
                cout<<"Podaj wartosci znajdujace sie w macierzy A : \n";
                matrix_a= create_matrix_d(rows_a,columns_a);
                matrix_a= fill_matrix(matrix_a,rows_a,columns_a);
                result_matrix= powerMatrix(matrix_a,rows_a,columns_a,power);
                print_matrix(result_matrix,rows_a,columns_a);
                free_matrix(matrix_a,rows_a);
                free_matrix(result_matrix,rows_a);
            }
            catch(const char* message)
            {
                cout << message << endl;
                free_matrix(matrix_a,rows_a);
                exit(1);
            }
        }
        else if(operation=="determinantMatrix")
        {
            double a;
            cout<<"Podaj wartosci znajdujace sie w macierzy A : \n";
            matrix_a= create_matrix_d(rows_a,columns_a);
            matrix_a= fill_matrix(matrix_a,rows_a,columns_a);
            a= determinantMatrix(matrix_a,rows_a,columns_a);
            cout<<"Wyznacznik macierzy A wynosi: "<<a<<"\n";
        }
        else if(operation=="matrixIsDiagonal")
        {
            bool result = false;
            cout<<"Podaj wartosci znajdujace sie w macierzy A : \n";
            matrix_a= create_matrix_d(rows_a,columns_a);
            matrix_a= fill_matrix(matrix_a,rows_a,columns_a);

            result = matrixIsDiagonal(matrix_a, rows_a, columns_a);

            if (result)
                cout << "Podana macierz jest diagonalna\n" << endl;
            else
                cout << "Podana macierz nie jest diagonalna\n" << endl;

            free_matrix(matrix_a,rows_a);
        }
        else if(operation=="sortRowsInMatrix")
        {
            cout<<"Podaj wartosci znajdujace sie w macierzy A : \n";
            matrix_a= create_matrix_d(rows_a,columns_a);
            matrix_a= fill_matrix(matrix_a,rows_a,columns_a);

            sortRowsInMatrix(matrix_a,rows_a,columns_a);
            print_matrix(matrix_a,rows_a,columns_a);
            free_matrix(matrix_a,rows_a);
        }

    }
    //jezeli podano niepoprawna wartosc, to wyswietlana jest instrukcja
    else
    {
        cout<<"Podano niepoprawna wartosc!";
        exit(1);
    }
}

