#include <iostream>//o "#include" ? ?ra adicionar bibliotecas de comandos, e o iostream ? uma biblioteca que possibilita de usar os comandos dela, no caso do std::cout e std::cin

int main(){
    int x{123};
    std::cout << x;
    std::cout << x << std :: endl;// colocando o "<< std :: endl", ele faz quebra de linha, no caso o pr?ximo print q ocorrer, ser? na pr?xima linha
    std::cout << x << "\n" ;// colocando "<< "\n"" faz a mesma coisa, p?rem ele ? bem mais eficiente por quest?o de compilar o c?digo
    std::cout << "O valor de x ? " << x << "\n";// tbm ? permitido q use << varias vezes na mesma linha de c?digo

    // dando valor a variavel pelo console/terminal q nem o input do python
    std:: cout << "Digite um valor: ";
    int b {};
    std::cin >> b;
    std::cout << b << "\n";


    // ? possiv?l adicionar mais de 1 ao mesmo tempo, por exemplo:
    std :: cout << "Digite uns valores: " << "\n";
    int w{};
    int p{};
    std::cin >> w >> p;// ele vai por ordem, primeiro o "w" e depois o "p". Se eu escrever no terminal tipo "23 45", o 23 ser? armazenado no w, e por ter espa?o, e o espa?o n?o ? um n?mero, ele pula e passa o 45 pra outra leitura de dados q no caso ser? no p


    // descobrir que o adicionar os numeros nas variaveis, tem limite pra isso, q no caso ? -2.147.483.648$ a 2.147.483.647, o tamanho pra  cada variavel gra?as ao int ? 4 bytes, se eu quiser mostrar um numero maior, tenho que usar outro tipo de variavel como long long ou outras, p?rem ainda estou no come?o, ent?o verei isso l? na frente
    std::cout << "Voc? digitou "<< w << " e " << p ;
    std::cout << " A soma de ambos ? "<< w + p; 

    return 0;
}