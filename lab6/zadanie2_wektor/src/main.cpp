#include "vector.h"

int main()
{
    Vector v1(3,4), v2(5,8);
    print_vector(v1);
    print_vector(v2);
    Vector v3=v1+v2;
    print_vector(v3);
    v3=v1-v2;
    cout<<v3<<endl;
    v3=~v1;
    cout<<v3<<endl;
    v3=v1*10;
    cout<<v3<<endl;
    bool tmp;
    cout<<"\nIloczyn skalarny: "<<v1%v1<<endl;
    tmp=v1^v2;
    if(tmp)
        cout<<"Wektory sa rowne"<<endl;
    else
        cout<<"Wektory nie sa rowne"<<endl;

}
