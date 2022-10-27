#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;


    cout << "Quantas pessoas serao digitadas? " ;
    cin >> n;

    double alt[n];
    char G[n];

    for(int i=0; i<n;i++){
        cout << "altura da " << i+1 << "a pessoa: ";
        cin >> alt[i];
        cout << "genero da " << i+1 << "a pessoa: ";
        cin >> G[i];
    }

    int contF = 0,contM = 0;
    double mediaF= 0,somaF= 0;
    double bA = alt[0];
    double mA = alt[0];

    for(int i=0; i<n;i++){
        if(G[i]=='M'){
           contM++;
        }
        else{
           somaF = somaF + alt[i];
           contF++;
        }
    }
    for(int i=1; i<n;i++){
        if(alt[i]>bA){
            bA = alt[i];
        }
        if(alt[i]<mA){
            mA = alt[i];
        }
    }
    mediaF = somaF / contF;

    cout << fixed << setprecision(2);
    cout << "menor altura = " << mA << endl;
    cout << "maior altura = " << bA << endl;
    cout << "media das alturas das mulheres = "<< mediaF <<endl;
    cout << "numero de homens = " << contM <<endl;

    return 0;
}
