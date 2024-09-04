#include <iostream>

int main (void){
    int INDICE = 12;
    int SOMA = 0;
    int K = 1;
    while (K < INDICE){
        K = K + 1;
        SOMA = SOMA + K;
    }

    std::cout << SOMA << std::endl;

    system("pause");
    return 0;

    // o resultado é 77

}