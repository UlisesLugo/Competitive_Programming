#include <iostream>

using namespace std;

int main()
{
    int n, contador;
    string a, b;
    cin >>n;
    for(int i=1; i<=n; i++){
        contador=0;
        cin >> a >> b;
        for(int j=0;j<a.length();j++){
            if(a[j]!=b[j])
                contador++;
        }
        cout << contador << endl;
    }

    return 0;
}
