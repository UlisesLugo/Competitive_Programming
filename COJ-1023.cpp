#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float contador = 0, a;
    for (int i=1;i<=12;i++){
        cin >> a;
        contador+=a;
    }

    cout << "$" << fixed <<setprecision(2) << contador/12;
    return 0;
}
