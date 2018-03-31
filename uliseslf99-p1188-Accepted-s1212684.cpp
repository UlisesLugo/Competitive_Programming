#include <iostream>

using namespace std;

int main()
{
    string num1,num2;
    int contador=0;
    cin >> num1 >> num2;
    for(int i=0;i<num1.length();i++)
        for(int j=0;j<num2.length();j++)
            contador+= (num1[i]-48)*(num2[j]-48);

    cout << contador << endl;
    return 0;
}
