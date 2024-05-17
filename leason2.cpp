//ESTE CODIGO PEDERGUNTA AO USUARIO SUA IDADE, E DEPENDENDO DA IDADE ELE VAI FALAR SE É CRIANÇA ADOLECENTE OU ADULTO

#include <iostream>
using namespace std;

int main() {
    int idade;
    cout << "Digite sua idade: ";
    cin << idade;
    
    if (idade < 12) {
        cout << "Você é uma criança." << endl;
    } else if (idade >= 12 && idade < 18) {
        cout << "Você é um adolescente." << endl;
    } else if (idade >= 18) {
        cout << "Você é um adulto." << endl;
    else {
        cout << "Idade inválida." << endl;
    }

    return 0;
}
