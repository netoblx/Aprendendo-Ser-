#include <iostream> // for std::cout

// em c++, o compilador ver o c?digo de cima pra baixo, ent?o ? bom que vc inicie a fun??o antes do lugar que vc vai usar( mesmo q n tenha nada mesmo), para o c?digo n?o der erro.
int somar(int a, int b);

int calcular_area(int largura, int altura);

int main() {
    std::cout << "A soma e: " << somar(3, 4) << '\n';
    std::cout << "A area e: " << calcular_area(5, 10) << '\n';
    return 0;
}

int somar(int a, int b) {
    return a + b;
}

int calcular_area(int largura, int altura) {
    return largura * altura;
}