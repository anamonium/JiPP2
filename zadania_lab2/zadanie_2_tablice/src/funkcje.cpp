using namespace std;

int losowe(int a,int b)
{
    int x;

    x=(a+rand()%(b-a+1));
    return x;
}

int fill_array(int *tab, int a)
{
    int x;
    for(int i=0;i<a;i++)
    {
        x=losowe(1,100);
        tab[i]=x;
    }
    return *tab;
}

int max_z_tablicy(int *tab, int a)
{
    int najwieksza=0;
    for(int i=0;i<a;i++)
    {
        if(tab[i]>najwieksza)
            najwieksza=tab[i];
    }
    return najwieksza;
}

int odwrocenie(int *tab, int a)
{
    int tmp;
    for(int i=0;i<a/2;i++)
    {
        tmp=tab[a-i-1];
        tab[a-i-1] = tab[i];
        tab[i] = tmp;
    }
    return *tab;
}

void print_array(int *tab, int a)
{
    for(int i=0;i<a;i++)
    {
        cout<<tab[i]<<"   ";
    }
}