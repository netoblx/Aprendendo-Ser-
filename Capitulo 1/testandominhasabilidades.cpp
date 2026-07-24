#include <iostream> //o "#include" ? ?ra adicionar bibliotecas de comandos, e o iostream ? uma biblioteca que possibilita de usar os comandos dela, no caso do std::cout e std::cin

int main()
{
    int x{};

    std::cout << "Digite a sua idade: ";

    std::cin >> x;

    std::cout << "Daqui a 50 anos vc tera "<< x + 50 << " anos\n";

    return 0;
}