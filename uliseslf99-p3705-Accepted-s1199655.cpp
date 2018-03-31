#include <iostream>

using namespace std;

int main()
{
    long long int intersecciones;
    int n;
    cin >> n;
    intersecciones = ((n-3)*(n-2)*(n-1)*n)/24;
    cout << intersecciones;
    return 0;
}
