#include <iostream>

using namespace std;

int main()
{
    int t;
    long long int a,b,suma;
    cin >> t;
    for (int i=1;i<=t; i++){
        cin >> a >> b;
        suma=0;
        for (int j=a;j<=b;j++)
            suma += (j*(j+1)*(j+2))%100;
        cout << suma%100 << endl;
    }
    return 0;
}
