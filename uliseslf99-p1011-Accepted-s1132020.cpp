#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main()
{
    int t, ng, nm, mayorGodzilla, mayorMechaGodzilla,g;
    cin >> t;
    while(t--){
        cin >> ng >> nm;
        mayorGodzilla = mayorMechaGodzilla = 0;
        for (int j = 0; j <ng;j++){
            cin >> g;
            mayorGodzilla=max(mayorGodzilla,g);
        }
        for (int k = 0; k < nm;k++){
            cin>>g;
            mayorMechaGodzilla= max(mayorMechaGodzilla,g);
        }
        if (mayorGodzilla>=mayorMechaGodzilla)
            cout << "Godzilla" << endl;
        else
            cout << "MechaGodzilla" << endl;
    }
    return 0;
}
