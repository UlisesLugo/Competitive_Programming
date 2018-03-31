#include <iostream>

using namespace std;

int main()
{
    unsigned long long int p,q,a,r;
    while(cin>>p>>q && (p!=0 || q!=0 )){
        cout << p << "/" << q <<"=[";
        r=p%q;
        while(r!=0){
            a=p/q;
            cout << a << ",";
            p=q;
            q=r;
            r=p%q;
        }
        cout << (p/q)-1 << ",1]"<<endl;
    }
    return 0;
}
