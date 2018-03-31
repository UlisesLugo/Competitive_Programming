#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector <int> votos(5,0);

    int casos, candidatos, regiones, cantidad;
    cin >> casos;
    for(int i=1;i<=casos;i++){
        cin >> candidatos >>  regiones;
        for(int j=1;j<=regiones;j++){
            for(int k=0;k<candidatos;k++){
                cin >> cantidad;
                votos[k] += cantidad;
            }
        }
        vector <int> copia(votos);
        sort(copia.begin(),copia.end());

        for(int j=0;j<candidatos;j++)
            if(copia[4]==votos[j]){
                cout << j+1 << endl;
                break;
            }
        votos.assign(5,0);
    }

    return 0;
}
