// NESTE PROJETO PODEMOS FAZER O CALCULO DA ÁREA DE UM CIRCULO PEDINDO O USUARIO O RAIO DO CIRCULO. FÓRMULA DO CALCULO AREA = PI.(RAIO.RAIO)

#include <iostream>

float calcularAreaCirculo(float raio) {
    return 3.14 * raio * raio;
}

int main() {
    float raio;
    cout << "Digite o raio do círculo: ";
    cin << raio;

    float area = calcularAreaCirculo(raio);

    cout << "A área do círculo é " << area << endl;
    return 0
}
