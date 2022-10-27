#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;

    cout << "Quantos elementos vai ter o vetor? ";
    cin >> n;

    int vet [n];

    for (int i=0;i<n;i++){
        cout << "Digite um numero: ";
        cin >> vet[i];
    }
    double mP ;
    double soma = 0;
    int cont = 0;

    for (int i = 0; i<n ;i++){

        if (vet[i] %2 == 0){
            soma = soma + vet[i];
            cont++;
        }
    }



    if(cont == 0){
        cout << "NENHUM NUMERO PAR" << endl;
    }
    else {
        mP = (double) soma/cont;

        cout << fixed << setprecision(1);
        cout << "MEDIA DOS PARES = "<<mP<<endl;
    }
    return 0;
}
