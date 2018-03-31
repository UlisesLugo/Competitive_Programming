#include <iostream>

using namespace std;

int main()
{
    string num;
    int par,impar,total;
    while(cin >> num && num!="0"){
        par=0;
        impar=0;
        total=0;
        for(int i=0;i<num.length();i++){
            if(i%2==0){
                par+= (num[i]-48);
            }
            else
                impar+= (num[i]-48);
        }
        total=impar-par;
        if(total%11==0)
            cout << num << " is a multiple of 11." << endl;
        else
            cout << num << " is not a multiple of 11." << endl;
    }
    return 0;
}
