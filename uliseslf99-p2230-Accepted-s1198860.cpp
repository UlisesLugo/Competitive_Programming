#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<long int> vectorA, vectorB;
    int dim;
    long int num;
    cin >> dim;
    for(int i=0;i<dim;i++){
        cin >> num;
        vectorA.push_back(num);
    }
    for(int i=0;i<dim;i++){
        cin >> num;
        vectorB.push_back(num);
    }

    sort(vectorA.begin(),vectorA.end());
    sort(vectorB.begin(),vectorB.end());
    long int suma=0;
    for(int i=0,j=dim-1;i<dim;i++,j--)
        suma+= vectorA[i] * vectorB[j];
    cout << suma << endl;
    return 0;
}
