// ARQUIVO: aprendendofuncoes.cpp

#include <iostream> 
#include "arquivoadicionalaoarquivocentral.h"   

// ---------------------------------------------------------
// O PR?-PROCESSADOR (#define)
// O #define age como um "Localizar e Substituir" no texto do c?digo.
// Antes do c?digo compilar, o C++ vai trocar toda palavra NOME_DO_JOGO por "Guerra Galactica".
#define NOME_DO_JOGO "Guerra Galactica"
// ---------------------------------------------------------

// NOTA SOBRE O #pragma once:
// Ele N?O vai aqui no arquivo .cpp! Ele vai na linha 1 dos seus arquivos .h
// para evitar que eles sejam colados duas vezes.


// void ? um tipo pra fun??o, que no caso ela faz uma a??o apenas pelo oq eu entendi porem n guarda dados de numeros
void criando_funcao(){
    std::cout << "Oiiiiii\n";
}

// n?o pode criar fun??es dentro de outras fun??es, mas pode chamar fun??es dentro de outras fun??es

// o tipo "int" pode fazer fun??o que guarda valores e pode manipular eles
int pegar_numero_secreto(){
    return 42;
}

/*int somar(int x, int y) {
    return x + y; // Ela calcula a soma e devolve o resultado
}
*/

// em c++, o compilador le o c?digo de cima pra baixo, ent?o ? bom que vc inicie a fun??o antes do lugar que vc vai usar
int calcular_area(int largura, int altura);


// o namespace permite que eu crie fun??es com o mesmo nome, e pra chamar elas, usamos o ::
namespace robo{
    void falar(){
        std::cout << "ola, bipbop!\n";
    }
}

// pode fazer varias fun??es dentro de um namespace
namespace alien{
    void falar(){
        std::cout << "ola, bliblo!\n";
    }
}

int main(){

    std::cout << "Bem-vindo ao jogo: " << NOME_DO_JOGO << '\n'; // O #define atua aqui!

    std::cout << "Aprendendo c mais mais\n";
    criando_funcao();
    std::cout << "Fui interropido n?\n";
    std::cout << "A area e: " << calcular_area(5, 10) << '\n';
    
    alien::falar();
    robo::falar();

    return 0;
}