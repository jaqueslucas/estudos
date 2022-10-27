#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cout << "Quantos alunos serao digitados? " ;
    cin >> n;

    string nomes[n];
    double nota1[n], nota2[n];

    for(int i=0;i<n;i++){
        cout << "Digite nome, primeira e segunda nota do "<<i+1<<"o aluno: \n";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nomes[i]);
        cin >> nota1[i];
        cin >> nota2[i];
    }

    double media;

    cout << "alunos aprovados:" <<endl;

    for(int i=0;i<n;i++){
        media = (nota1[i]+nota2[i])/2;

        if (media >= 6.0){

            cout << nomes[i] << endl;
        }
    }


    return 0;
}
