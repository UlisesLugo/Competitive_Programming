#include <iostream>

using namespace std;

int main()
{
    int dog1Agg, dog1Calm, dog2Agg, dog2Calm,characters[3];
    cin >> dog1Agg >> dog1Calm >> dog2Agg >> dog2Calm >> characters[0] >> characters[1] >> characters[2];

    for(int i=0; i<3; i++){
            characters[i]--;
        int suma1, suma2;
        suma1 = dog1Agg;
        suma2= dog2Agg;
        bool ataca1=1, ataca2=1;
        while(suma1<=characters[i]){
            if(ataca1){
                suma1+=dog1Calm;
                ataca1=0;
            }
            else{
                suma1+=dog1Agg;
                ataca1=1;
            }
        }
        while(suma2<=characters[i]){
            if(ataca2){
                suma2+=dog2Calm;
                ataca2=0;
            }
            else{
                suma2+=dog2Agg;
                ataca2=1;
            }
        }
        if(ataca1 && ataca2)
            cout << "both" << endl;
        else if(ataca1 || ataca2)
            cout << "one" << endl;
        else
            cout << "none" << endl;
    }
    return 0;
}
