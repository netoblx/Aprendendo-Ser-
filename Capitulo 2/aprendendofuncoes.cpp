#include <iostream> 

//void ? um tipo pra fun??o, que no caso ela faz uma a??o apenas pelo oq eu entendi porem n guarda dados de numeros
void criando_funcao(){

    std::cout << "Oiiiiii\n";
}

//n?o pode criar fun??es dentro de outras fun??es, mas pode chamar fun??es dentro de outras fun??es

// o tipo "int" pode fazer fun??o que guarda valores e pode manipulaqar eles
int pegar_numero_secreto(){
    return 42;
}

int somar(int x, int y) {
    return x + y; // Ela calcula a soma e devolve o resultado
}

int main(){

    std::cout << "Aprendendo ser mais mais\n";
    criando_funcao();
    std::cout << "Fui interropido n?\n";
    return 0;
}