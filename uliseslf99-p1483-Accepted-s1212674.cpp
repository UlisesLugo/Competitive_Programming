#include <iostream>

using namespace std;

int main()
{
    string nombre;
    int lado1, lado2;
    cin >> nombre;
    if(nombre=="square"){
        cin >> lado1;
        cout << lado1 * lado1 << endl;
    }
    else{
        cin >> lado1 >> lado2;
        cout << lado1*lado2 << endl;
    }
    return 0;
}
