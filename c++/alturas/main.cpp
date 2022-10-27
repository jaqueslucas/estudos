#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int n , pMvalor;
    double mValor;

    cout << "Quanto numeros voce vai digitar? ";
    cin >> n;

    double vet[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    mValor = vet[0];
    pMvalor = 0;

    for (int i = 0; i < n; i++)
    {
        if(vet[i]>mValor)
        {
            mValor = vet[i];
            pMvalor = i;
        }
    }
    cout << fixed << setprecision(1) << endl;
    cout << "MAIOR VALOR = " << mValor << endl;
    cout << "POSICAO DO MAIOR VALOR = "<< pMvalor << endl;


    return 0;

}
