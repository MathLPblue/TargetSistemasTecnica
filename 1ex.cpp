#include <iostream>

bool ehFibonnaci (int n){
    if (n < 0) return false;
    if(n == 0 || n == 1 ) return true;

    int a = 0, b = 1, c;

    while (b <= n ){
        if (b == n) return true;
        c = a + b;
        a = b;
        b = c;
    }
    return false;
}

int main(void){
    int qnt;
    std::cout << "Qual o número você deseja verificar se pertence a Fibonacci?";
    std::cin >> qnt;

    if (ehFibonnaci(qnt)){
        std::cout <<"\nO número: "<< qnt << " pertence a Fibonacci"<< std::endl;    
    } 
    else{
        std::cout << "\nO número: "<< qnt << " Não pertence a Fibonacci"<<std::endl;
    }
    system("pause");
    return 0;
}