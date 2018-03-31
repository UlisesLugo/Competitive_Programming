#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
    string s;
    char digitos[1000],ultimo;
    int ult,suma,longitud,n;
    cin >> n;
    for(int i=1;i<=n;i++){
        suma=0;
        cin >> s;
        longitud = s.length();
        ultimo = s[longitud-1];
        ult = ultimo - '0';
        if(ultimo%2==1)
            cout << "NO" << endl;
        else{
            for(int i=0;i<longitud;i++){
                digitos[i]=s[i];
                suma+= digitos[i] - '0';
            }
            if(suma%3==0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }

    }
    return 0;
}
