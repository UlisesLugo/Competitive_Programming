#include <iostream>

using namespace std;

int main()
{
    string hola;
    getline(cin,hola);
    int cont1=0, cont2=0, cont3=0;
    while(hola.length()>0){
        if(hola[0]=='1')
            cont1++;
        else if(hola[0]=='2')
            cont2++;
        else if(hola[0]=='3')
            cont3++;
        hola.erase(0,2);
    }
    for(int i=1;i<=cont1;i++){
        cout << 1;
        if(i==cont1 && cont2==0 && cont3==0)
            cout << endl;
        else
            cout << "+";
    }
    for(int i=1;i<=cont2;i++){
        cout << 2;
        if(i==cont2 && cont3==0)
            cout << endl;
        else
            cout << "+";

    }
    for(int i=1;i<=cont3;i++){
        cout << 3;
        if(i==cont3)
            cout << endl;
        else
            cout << "+";
    }

    return 0;
}
