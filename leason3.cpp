//ESTE PROJETO PEDE AO USUARIO DOIS NUMEROS E APÓS ISSO PEDE QUE ELE DIGITE O SIMBOLO DO OPERADOR E DEPOIS FAZ A OPERAÇÃO DEPENDENDO DO OPERADOR SELECIONADO
#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;

    cout << "Digite o operador (+, -, *, /): ";
    cin >> op;

    cout << "Digite dois operandos: ";
    cin >> num1; num2;

    switch(op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            else
                cout << "Erro: Divisão por zero!" << endl;
            break;
        default:
            cout << "Erro: Operador inválido!" << endl; 
    }

    return 0;
}
