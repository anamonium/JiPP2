using namespace std;

void srednia_dwoch_liczb()
{
    int a,b,*wsk1,*wsk2;
    double srednia;
    cout<<"Podaj dwie liczby\na = ";
    cin>>a;
    cout<<"\nb = ";
    cin>>b;

    wsk1=&a;
    wsk2=&b;

    srednia=(double)(*wsk1+*wsk2)/2;
    cout<<"Srednia: "<<srednia<<"\n";
}

void tablica()
{
    int *tab,n,i,tmp=0;
    cout<<"Podaj ilosc elementow tablicy:\nn = ";
    cin>>n;
    cout<<"Wpisz po kolei elementy tablicy\n";

    tab=new int[n];

    for(i=0;i<n;i++)
    {
        cin>>tab[i];
    }

    cout<<"TABLICA:\n[";
    for(i=0;i<n;i++)
    {
        cout<<"  "<<tab[i];
    }
    cout<<"]\n\nElementy tablicy wieksze od 0:";
    for(i=0;i<n;i++)
    {
        if(tab[i]>0){
            cout<<"  "<<tab[i];
            tmp++;}

        if(tmp==0)
            cout<<" Brak dodatnich elementow\n";
    }

    delete tab;
}



void przypisanie(int x, int *w)
{
    w=&x;
    cout<<"Wartosc wskazywana przez wskaznik: "<<*w<<"\n"<<endl;
}

void ostatnie()
{
    int x=245;
    int *w;
    przypisanie(x,w);
}
