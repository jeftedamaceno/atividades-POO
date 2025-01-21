// Figura 12.6: fig12_06.cpp
// Testando a classe CommissionEmployee.
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include "CommissionEmployee.h" // Definição da classe CommissionEmployee

int main() {
    // instancia um objeto CommissionEmployee 
    CommissionEmployee employee("Sue", "Jones", "222-22-2222", 10000, .06);

    // configura a formatação de saída de ponto flutuante
    cout << fixed << setprecision(2);

    // obtém os dados do empregado comissionado
    cout << "Informações do funcionário obtidas pelas funções get: \n"
         << "\nPrimeiro nome: " << employee.getFirstName()
         << "\nÚltimo nome: " << employee.getLastName()
         << "\nNúmero de seguridade social: " << employee.getSocialSecurityNumber()
         << "\nVendas brutas: " << employee.getGrossSales()
         << "\nTaxa de comissão: " << employee.getCommissionRate() << endl;

    employee.setGrossSales(8000);      // configura as vendas brutas 
    employee.setCommissionRate(.1);   // configura a taxa de comissão 

    cout << "\nInformações atualizadas do funcionário exibidas pela função print: \n" << endl;
    employee.print(); // exibe as novas informações do empregado

    // exibe os rendimentos do empregado
    cout << "\n\nRendimentos do funcionário: $" << employee.earnings() << endl;

    return 0;
} // fim de main
