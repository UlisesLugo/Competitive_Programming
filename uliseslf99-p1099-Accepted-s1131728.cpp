#include <iostream>


using namespace std;



int main()
{
    int a,b,c;
    //int evaluador[1000],i=0;

    cin >> a;
    for ( a ; a!=0;){
        cin >> b >> c;
        if ( a*a + b*b == c*c || a*a + c*c == b*b || b*b+ c*c == a*a )
            //evaluador[i]=1;
            cout << "right" << endl;
        else
            cout << "wrong" << endl;
            //evaluador[i]=0;
        cin >> a;
    }
    //for (int x = 0; x<=i; x++){
    //    if (evaluador[x]==1)
    //        cout << "right" << endl;
    //    else if (evaluador[x]== 0)
    //        cout << "wrong" << endl;
    //}
    return 0;
}
