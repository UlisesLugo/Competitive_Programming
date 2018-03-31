#include <iostream>

using namespace std;

int main()
{
    int n,k ,a[101], casos;
    cin >> casos;
    for(int i=1;i<=casos;i++){
        cin >> n >> k;
        int pasan=0;
        for (int i= 0; i < n; i++){
            cin >> a[i];
        }
        for (int i= 0; i < n; i++){
            if(a[k-1]<=0){
                if(a[i]>0)
                pasan++;
            }
            else{
             if(a[k-1]<=a[i])
                pasan++;
            }
        }

        cout << pasan <<endl;
    }
    return 0;
}
