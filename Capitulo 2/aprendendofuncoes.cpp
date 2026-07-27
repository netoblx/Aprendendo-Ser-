#include <iostream> 
                                                // com #include "algumarquivo.extens?o", posso chamar o c?digo do arquivo de fora para dentro daaq pra usar, p?rem ainda necessitaria de inicializar a fun??o mas...
#include "arquivoadicionalaoarquivocentral.h"   // inv?s de eu inicializar as fun??es no come?o, eu posso adicionar eles num arquivo com a extens?o de ".h",  que o compilador por l? de cima para baixo, ele vai passar por arqui antes
#include "funcoesparaarquivocentral.cpp"        // aqui to chamando um arquivo com fun??es e c?digo que eu quuero para aqui dentro
// aprendi que n precisa chamar um arquivo cpp pra usar outra fun??o, no caso preciso que o vscode rode varios arquivos ao msm tempo pra fazer da certo, e n?o um que chame o outro
//void ? um tipo pra fun??o, que no caso ela faz uma a??o apenas pelo oq eu entendi porem n guarda dados de numeros
void criando_funcao(){

    std::cout << "Oiiiiii\n";
}

//n?o pode criar fun??es dentro de outras fun??es, mas pode chamar fun??es dentro de outras fun??es

// o tipo "int" pode fazer fun??o que guarda valores e pode manipulaqar eles
int pegar_numero_secreto(){
    return 42;
}

/*int somar(int x, int y) {
    return x + y; // Ela calcula a soma e devolve o resultado
}
*/

//em c++, o compilador ver o c?digo de cima pra baixo, ent?o ? bom que vc inicie a fun??o antes do lugar que vc vai usar( mesmo q n tenha nada mesmo), para o c?digo n?o der erro.
//vc pode criar a fun??o der o codigo e n usar ela, n vai ter problema
int calcular_area(int largura, int altura);


//o namespace permite que eu crie fun??es com o mesmo nome, e pra chamar elas, tenho que fazer parecido com o std::cout, no caso seria o primeiro nome mais :: mais a fun??o
namespace robo{

    void falar(){

        std::cout << "ola, bipbop!\n";
    }
}

// e se eu n tiver enganado, pode fazer varias fun??es dentro de um namespace
namespace alien{

    void falar(){

        std::cout << "ola, bliblo!\n";
    }
}


int main(){

    std::cout << "Aprendendo ser mais mais\n";
    criando_funcao();
    std::cout << "Fui interropido n?\n";
    std::cout << "A area e: " << calcular_area(5, 10) << '\n';
    alien::falar();
    robo::falar();

    return 0;
}

