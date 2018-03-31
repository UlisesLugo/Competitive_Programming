#include <iostream>

using namespace std;

int main()
{
    string cadena;
    int contador=0;
    cin >> cadena;
    for(int i=0;i<cadena.length();i++){
        contador += (cadena[i]-64);
    }
    cout << contador << endl;
}
