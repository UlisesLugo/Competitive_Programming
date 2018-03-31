#include <iostream>

using namespace std;

int main()
{
    int t,p,n;
    string tipo;
    cin >> t;
    for (int i=1; i<=t; i++){
        cin >> n >> tipo >> p;
        if (tipo == "odd"){
            cout << 2 * p << endl;
        }
        else if (tipo == "even"){
            cout << 2 * p -1 << endl;
        }
    }
    return 0;
}
