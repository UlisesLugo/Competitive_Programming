#include <iostream>

using namespace std;

int main()
{
    int m,n,x,y,cuenta;
    cin >>m >>n >> x >> y >> cuenta;
    int num[cuenta];
    char car[cuenta];
    for (int i = cuenta ; i>=1; i--){
        cin >> car[i] >> num[i];
    }
    for (int j=1;j<=cuenta;j++){
        switch (car[j]){
            case 'S': x -= num[j];
                break;
            case 'N': x += num[j];
                break;
            case 'E': y -= num[j];
                break;
            case 'W': y += num[j];
                break;
        }
    }
    cout << x << " " << y;
    return 0;
}
