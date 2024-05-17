// ESTE CÓDIGO ELE TEM COMO FUNÇÃO, PEDIR AO USUARIO DOIS NUMEROS E DIZER QUAL DOS DOIS É O MAIOR

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Digite dois números: ";
    cin >> a; b;

    if (a > b) {
        cout << "O primeiro número é maior." << endl
    } else if (a < b)
        cout << "O segundo número é maior." << endl;
    } else {
        cout << "Os números são iguais." << endl;
    }

    return 0;
