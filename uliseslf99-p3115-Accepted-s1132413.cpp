#include <iostream>

using namespace std;

int main()
{
    int t, n, suma[1000], sumaMayor[250],a,b,total[250];
    cin >> t;
    for (int i=0; i<=250; i++){
        sumaMayor[i]=0;
        total[i]=0;
    }
    for (int i = 1; i<=t; i++){
        cin >> n;
        for (int j = 1; j<=n; j++){
            cin >> a >> b;
            suma[j]= a+b;
            sumaMayor[i] = max(sumaMayor[i],suma[j]);
        }
        for (int j = n; j>=1; j--){
            total[i]+= (sumaMayor[i]-suma[j]);
        }
        cout << total[i] << endl;
    }

    return 0;
}
