#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   int n;
   long long int suma;
    cin >> n;
    if (n >= 0) {
            suma = (n*(n+1))/2;
            cout << suma;
    }
    else{
        n= abs(n);
        suma = -((n*(n+1))/2) + 1;
        cout << suma;
    }
    return 0;
}
