#include <iostream> 

namespace robo{

    void falar(){

        std::cout << "ola, bipbop!\n";
    }
}
namespace alien{

    void falar(){

        std::cout << "ola, bliblo!\n";
    }
}

int main() {

    alien::falar();
    robo::falar();

    return 0;
}

