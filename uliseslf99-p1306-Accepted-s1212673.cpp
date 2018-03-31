#include <iostream>

using namespace std;

int main()
{
    string cadena;
    int contador,longitud,times;
    cin >> times;
    for(int i=1;i<=times;i++){
        cin >> cadena;
        longitud = cadena.length();
        contador= (cadena[longitud-1]-48)+ (cadena[longitud-2]-48)*10;
        if(contador%4==0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
