#include <iostream>

using namespace std;

int main()
{
    int grupos;
    while(cin>>grupos && grupos!=0){
        string original,nueva;
        cin >> original;
        nueva="";
        int longitud=original.length(), letras=longitud/grupos;
        for(int i=letras-1;i<longitud;i+=letras)
            for(int j=0;j<letras;j++)
                nueva += original[i-j];

        cout<<nueva<<endl;
    }
    return 0;
}
