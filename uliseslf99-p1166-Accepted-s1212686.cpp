#include <iostream>

using namespace std;

int main()
{
    int odd,even,times,numbers,num;
    cin >> times;
    for(int i=1;i<=times;i++){
        odd=0;
        even=0;
        cin >> numbers;
        for(int j=1;j<=numbers;j++){
            cin >> num;
            if(num%2)
                odd++;
            else
                even++;
        }
        cout << even << " even and " << odd << " odd." << endl;
    }
    return 0;
}
