// Testando a classe CommissionEmployee.
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include "CommissionEmployee.h" // Definição da classe CommissionEmployee

int main() {
    // Instancia um objeto CommissionEmployee 
    CommissionEmployee employee( 
        "Sue", "Jones", "222-22-2222", 10000, .06 
    );

    // Configura a formatação de saída de ponto flutuante
    cout << fixed << setprecision(2);

    // Obtém os dados do empregado comissionado
    cout << "Informações do funcionário obtidas por funções get:\n"
         << "\nPrimeiro nome: " << employee.getFirstName()
         << "\nÚltimo nome: " << employee.getLastName()
         << "\nNúmero de segurança social: "
         << employee.getSocialSecurityNumber()
         << "\nVendas brutas: " << employee.getGrossSales()
         << "\nTaxa de comissão: " << employee.getCommissionRate() << endl;

    // Atualiza as vendas brutas e a taxa de comissão
    employee.setGrossSales(8000);
    employee.setCommissionRate(0.1);

    cout << "\nInformações atualizadas do funcionário exibidas pela função print:\n"
         << endl;
    employee.print(); // Exibe as novas informações do empregado

    // Exibe os rendimentos do empregado
    cout << "\n\nGanhos do funcionário: $" << employee.earnings() << endl;

    return 0;
} // fim de main
