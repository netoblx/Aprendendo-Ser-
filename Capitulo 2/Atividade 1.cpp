#include <iostream> // for std::cout

int dobrador_de_numero(int numero){//criando variavel j? dentro dos parenteses(pqsim)
    return numero *2 ;
}

int main(){

    int valor{};

    std::cout << "Digite um valor para ser duplicado: ";
    
    std::cin >> valor;

    int resultado{dobrador_de_numero(valor)};

    std::cout << "O valor final ? " << resultado <<"\n";

    return 0;
}