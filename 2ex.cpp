#include <iostream>
#include <string>

int main(void){
    std::string input;
    int conta = 0;

    std::cout << "\nDiga uma String!";
    std::getline(std::cin, input);

    for (char x : input){
        if (x == 'a' || x == 'A'){
            conta++;
        }
    }

    if (conta > 0){
        std::cout <<"\nA quantidade de vezes que a letra a aparece é: "<< conta << " vezes na String" << std::endl;
    } 
    else 
    {
        std::cout << "A letra a não aparece na String" << std::endl;
    }
    system("pause");
    return 0;
}