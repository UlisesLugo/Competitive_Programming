#include <iostream>

using namespace std;

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

int main()
{
    int contador,n;
    contador=1;
    cin >> n;
    for(int i=2;i<n;i++)
        if(gcd(i,n)==1)
            contador++;

    cout << contador << endl;
    return 0;
}
