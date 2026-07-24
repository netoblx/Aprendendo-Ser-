#include <iostream> // for std::cout

int pegar_numero_secreto(){
    return 42;
}
int main()
{
    int segredo{pegar_numero_secreto()};

    std::cout << segredo;

    return 0;
}