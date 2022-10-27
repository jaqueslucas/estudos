#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cout << "Quantos valores vai ter cada vetor?" << endl;
    cin >> n;

    int a[n],b[n],c[n];


    for(int i=0;i<n;i++){
        cout<< "Digite os valores do vetor A:";
        cin >> a[i];
    }

    for(int i=0;i<n;i++){
        cout<< "Digite os valores do vetor B:";
        cin >> b[i];
    }
    for(int i=0;i<n;i++){
        c[i] = a[i] + b[i];
    }


    cout << "VETOR RESULTANTE:\n" ;

    for(int i=0;i<n;i++){
        cout << c[i] << endl;
    }



    return 0;
}
