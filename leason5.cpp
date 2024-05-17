// ESTE CÓDIGO PEDE AO USUARIO O HORÁRIO ATUAL E DEPENDENDO DO HORÁRIO ELE DIRA BOM DIA, BOA TARDE OU BOA NOITE

#include <iostream>
using namespace std;

void saudacao(int hora) {
    if (hora < 0 || hora > 24) {
        cout << "Hora inválida!" << endl;
        return;
    }
    if (hora < 12) {
        cout << "Bom dia!" << endl;
    } else if (hora < 18) { // Erro: falta de chave de abertura {
        cout << "Boa tarde!" << endl;
    } else {
        cout << "Boa noite!" << endl;
    }
}

int main() {
    int hora;

    cout << "Digite a hora (0-24): ";
    cin << hora; // Erro: operador << em vez de >>

    saudacao(hora);

    return 0;
}
