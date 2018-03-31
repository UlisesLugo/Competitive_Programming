#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int times,num;
    vector<int> lista;
    cin >> times;
    for(int i=1;i<=times;i++){
        cin >> num;
        lista.push_back(num);
    }
    sort(lista.begin(),lista.end());
    for(int i=0;i<times;i++){
        cout << lista[i] << endl;
    }
    return 0;
}
