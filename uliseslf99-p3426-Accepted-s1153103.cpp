#include <iostream>

using namespace std;

int main()
{
    long long int a,b,menor,mayor,suma=0;
    cin >> a >> b;
    menor = min(a,b);
    mayor= max(a,b);

    suma= ((a+b-1)*(a+b)/2) - ((mayor-menor)*(mayor-menor+1)/2);


    cout << suma << endl;
    return 0;
}
