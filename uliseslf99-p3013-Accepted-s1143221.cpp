#include <iostream>

using namespace std;

int main()
{
    int t,k,pasajeros;
    cin >> t;
    for(int i=1; i<=t; i++){
        cin >> k;
        pasajeros=1;
        for(int j=1;j<k;j++){
            pasajeros = pasajeros*2 +1;
        }
        cout << pasajeros << endl;
    }

    return 0;
}
