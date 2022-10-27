#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    double mVet;

    cout << "Quantos elementos vai ter o vetor?";
    cin >> n ;

    double vet[n];

    for(int i=0; i<n; i++){
        cout << "Digite um numero:";
        cin >> vet[i];
    }
    double soma = 0;

    for(int i=0; i<n; i++){
        soma = soma + vet[i];
        ;
    }
        mVet = soma/n;

    cout << fixed << setprecision(3);
    cout << endl << "MEDIA DO VETOR = " << mVet << endl;
    cout << "ELEMENTOS ABAIXO DA MEDIA:"<< endl;
    cout << fixed << setprecision(1);

    for(int i=0; i<n; i++){

        if(vet[i] < mVet){
            cout << vet[i] << endl;
        }
    }

    return 0;
}
