using namespace std;

int zamiana(const char* data) {


    int x=0,a=0;
    long long ptr=0;

    for(int i=0;data[i];i++)
    {
        x++;
    }

    for (int i = 0; data[i]; i++) {

        if (data[i] >= '0' && data[i] <= '9'){
            a = a * 10 + data[i] - '0';
            ptr = ptr * 10 + data[i] - '0';
        }
        else
            throw invalid_argument("Nieprawidlowe znaki");

        if (ptr>2147483647)
            throw invalid_argument("Wprowadzona liczba jest za duza");
    }
    return a;
}
