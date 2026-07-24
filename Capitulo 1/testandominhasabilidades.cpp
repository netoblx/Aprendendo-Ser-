#include <iostream> //o "#include" ? ?ra adicionar bibliotecas de comandos, e o iostream ? uma biblioteca que possibilita de usar os comandos dela, no caso do std::cout e std::cin

int main()
{
    int idade{};

    std::cout << "Digite a sua idade: ";

    std::cin >> idade;

    int idade_futura{idade + 50};

    std::cout << "Daqui a 50 anos vc tera "<< idade_futura << " anos\n";

    return 0;
}