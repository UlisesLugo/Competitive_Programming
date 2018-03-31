#include <iostream>

using namespace std;

int main()
{
    int a[7],maxi,mini,suma1,suma2,suma3,suma4,total=0,m1,m2;
    for(int i=0; i<=7;i++){
        cin >> a[i];
        total += a[i];
    }
    suma1 = a[0] + a[1] + a[2] + a[3];
    suma2 = a[1] + a[2] + a[3] + a[4];
    suma3 = a[2] + a[3] + a[4] + a[5];
    suma4 = a[3] + a[4] + a[5] + a[6];
    m1 = max(suma1,suma2);
    m2 = max(suma3,suma4);
    maxi= max(m1,m2);
    m1 = min(suma1,suma2);
    m2 = min(suma3,suma4);
    mini= min(m1,m2);
    maxi = max(maxi,total-mini);

    cout << maxi << endl;
    return 0;
}
