#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Quantas pessoas voce vai digitar? " ;
    cin >> n;

    string nomes[n];
    int idades[n];

    for(int i=0;i<n;i++){
        cout << "Dados da "<< i+1 <<"a pessoa: "<<endl;
        cout << "nome: ";
        cin >> nomes[i];
        cout << "idade: ";
        cin >> idades[i];
    }

    int mP = 0;
    int mI = idades[0];

    for(int i=0;i<n;i++){

        if(idades[i] > mI ){
            mI = idades[i];
            mP = i;
        }
    }

    cout << "PESSOA MAIS VELHA: " << nomes[mP] << endl;

    return 0;
}
