#include <iostream>

int main(){
    int x =6;// criando vari?vel com  "int" pra ser uma variavel inteiro (que s? aceita numeros inteiros) e atribuindo valor com "=" de forma de c?pia
    x=12;// trocando o valor da vari?vel 

    std :: cout << x;// o "std :: cout" ? pra imprimir a variavel no terminal e o "<<" ? meio que encaminha  a variav?l x ( se foi isso que eu entendi)
    int b (23);// os "()" outra forma de atribui valor, de forma direta
    std :: cout << b;

    // Esse abaixo ? normalmente mais usado para atribuir valor nas vari?vel/objeto
    int c {24};// os "{}" mais outra forma de atribui valor, porem pode ser em lista
    std :: cout << c;
    int a {};// os "{}" mais outra forma de atribui valor, que faz que ele tenha valor )
    std :: cout << a;

    //Adi??o de valores em multiplas variaves
    int ab = 5, ba = 6;          // copy-initialization
    int cd ( 7 ), dc ( 8 );      // direct-initialization
    int e { 9 }, f { 10 };     // direct-list-initialization
    int i {}, j {};            // value-initialization
    //normalmente mais usadas s?o os da linha 18 e 20

    //o [[maybe_unused]], ? apenas um comando que caso a variavel n seja utilizada, n?o necessariamente o codigo vai dar aviso ou erro
    [[maybe_unused]] double pi { 3.14159 };  // Don't complain if pi is unused, o double ? pra variav?l ter mais de um tipo e como os "{}" n abrevia os numeros q n?o s?o inteiros, o double faz q possazr ser "float", e permitindo atribuir o valor a ele
    std::cout << pi << '\n';
    return 0;
}