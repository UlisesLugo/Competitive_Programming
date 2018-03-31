#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int longitud, mitad,posicion;
    string s,n;
    cin >> s;
    longitud = s.length();
    mitad = ceil(longitud/2.0);

    if(longitud%2==0){
        posicion= mitad-1;
        for(int i=0; i<mitad;i++,posicion--)
            n[i]=s[posicion];

        posicion=longitud-1;
        for(int i=mitad; i < longitud;i++,posicion--)
            n[i]=s[posicion];

        for(int i=0; i<longitud;i++)
            cout << n[i];

        cout << endl;
    }
    else{
        posicion= mitad-2;
        for(int i=0; i<mitad;i++,posicion--)
            n[i]=s[posicion];

        posicion=longitud-1;
        for(int i=mitad; i < longitud;i++,posicion--)
            n[i]=s[posicion];

        n[mitad-1]=s[mitad-1];

        for(int i=0; i<longitud;i++)
            cout << n[i];

        cout << endl;
    }

    return 0;
}
