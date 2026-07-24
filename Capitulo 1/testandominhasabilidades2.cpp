#include <iostream> 

int main()
{
    int largura{};
    int comprimento{};

    std::cout << "Digite a largura: ";

    std::cin >> largura;

    std::cout << "Digite o comprimento: ";

    std::cin >> comprimento;

    int area{largura * comprimento};
    int perimetro{largura * 2 + comprimento * 2};
    
    std::cout <<"A area do terreno ? " << area << "\n";
    std::cout <<"E o perimetro ? " << perimetro << "\n";

    return 0;
}