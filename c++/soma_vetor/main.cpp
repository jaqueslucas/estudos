#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    double soma, media;
    cout << "Quantos numeros voce vai digitar?" << endl;
    cin >> n;

    double vet[n];

    for (int i = 0; i<n; i++){
        cout << "Digite um numero:";
        cin >> vet[i];

    }

    soma = 0;
    cout<< "valores = ";
    cout << fixed << setprecision(1);

    for (int i = 0; i<n; i++){
        soma = soma + vet[i] ;
        cout <<(double) vet[i] << " ";


    }
    cout << endl;
    cout << fixed << setprecision(2);
    cout << "soma = " << soma << endl;
    cout << "media = " << soma/n << endl;




    return 0;
}
