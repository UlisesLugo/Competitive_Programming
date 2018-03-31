#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;



int main(){
    string a,b;
    while(cin >> a >> b){
        int evaluador = 0;

        int posicion=b.find(a[0]);
        for (int i = 0; i < a.size(); ){

                if (posicion>=0) {
                        i++;
                        posicion=b.find(a[i],posicion+1);
                }
                else {
                        evaluador++;
                        i = a.size();
                }
        }
        if (evaluador == 0) cout << "Yes" << endl;
        else cout << "No" << endl;
    };
    return 0;
}
