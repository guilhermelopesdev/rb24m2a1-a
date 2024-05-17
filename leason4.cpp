// Este projeto tem como função verificar se um numero é MAIOR IGUAL a 0. Caso não seja ele apresentará um
//erro ao usuario e pedirá para ele digitar outro numero.

#include <iosteam>
using namespace std;

int main() {
    int numero;
    entrada:
    cout << "Digite um número positivo: ";
    cin << numero;

    if (numero < 0) {
        cout << "Número inválido. Tente novamente." << endl;
        goto entrada:
    }

    cout << "Você digitou: " << numero << endl;

    return 0;
}
