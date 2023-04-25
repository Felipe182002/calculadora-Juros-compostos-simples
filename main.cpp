#include <iostream>
#include <vector>
#include <string>
#include <cmath>

int main()
{

   double valor_inicial;
   double taxa;
   double tempo;
   double resultado = 0;

    std::cout  << "Digite o Valor Inicial:" ;
    std::cin >> valor_inicial;
   
    std::cout << "Digite a taxa:" ;
    std::cin >> taxa;

    std::cout << "Digite o tempo em meses:" ;
    std::cin >> tempo;

    for ( int i = 0; i < tempo; i++)
    {

      resultado = valor_inicial * (1 + (taxa/100));
      valor_inicial = resultado;

    }
    
    std::cout << "Valor Final:" << valor_inicial  << std::endl;  

    system("pause");

    return 0;
    
}