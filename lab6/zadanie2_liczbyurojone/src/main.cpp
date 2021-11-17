#include "complex.h"

int main()
{
    Complex v1(7,8), v2(10,15);
    Complex v4(20,20);
    print_complex(v1);
    print_complex(v2);
    Complex v3=v1+v2;
    print_complex(v3);
    v3=v1-v2;
    print_complex(v3);
    v3=~v1;
    print_complex(v3);
    v3=10*v1;
    print_complex(v3);
    bool tmp;
    cout<<"\nIloczyn skalarny: "<<v1%v1<<endl;
    tmp=v1^v2;
    if(tmp)
        cout<<"Liczby sa rowne"<<endl;
    else
        cout<<"Liczby nie sa rowne"<<endl;

    cout<<"\n"<<v4<<endl;
}

