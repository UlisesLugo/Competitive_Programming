#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i=1; i <=n; i++){
        string palabra;
        int medida;
        cin >> palabra;
        medida = palabra.length();
        if (medida>10)
            cout << palabra[0] << medida-2 << palabra[medida-1]<<endl;
        else
            cout << palabra << endl;;
    }
    return 0;
}
