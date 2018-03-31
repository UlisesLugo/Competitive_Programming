#include <iostream>


using namespace std;

int main()
{
    int casos, evalua;
    long int vertices,combinaciones;
    cin >> casos;
    for(int i=1;i<=casos;i++){
        cin >> evalua;
        vertices = (evalua+1)*(evalua+1);
        combinaciones = (vertices * (vertices-1) * (vertices-2))/6;
        switch(evalua){
            case 1:
                cout << combinaciones << endl;
                break;
            case 2:
                cout << combinaciones -8<< endl;
                break;
            case 3:
                cout << combinaciones -44<< endl;
                break;
            case 4:
                cout << combinaciones -152<< endl;
                break;
            case 5:
                cout << combinaciones -372<< endl;
                break;
            case 6:
                cout << combinaciones -824<< endl;
                break;
            case 7:
                cout << combinaciones -1544<< endl;
                break;
            case 8:
                cout << combinaciones -2712<< endl;
                break;
            case 9:
                cout << combinaciones -4448<< endl;
                break;
            case 10:
                cout << combinaciones -6992<< endl;
                break;
        }
    }
    return 0;
}
