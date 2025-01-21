// Testando a classe BasePlusCommissionEmployee.
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

// Definição da classe BasePlusCommissionEmployee
#include "BasePlusCommissionEmployee.h"

int main() {
    // Instancia o objeto BasePlusCommissionEmployee
    BasePlusCommissionEmployee employee(
        "Bob", "Lewis", "333-33-3333", 5000, .04, 300
    );

    // Configura a formatação de saída de ponto flutuante
    cout << fixed << setprecision(2);

    // Obtém os dados do empregado comissionado
    cout << "Informações do funcionário obtidas por funções get:\n"
         << "\nPrimeiro nome: " << employee.getFirstName()
         << "\nÚltimo nome: " << employee.getLastName()
         << "\nNúmero de segurança social: " << employee.getSocialSecurityNumber()
         << "\nVendas brutas: R$" << employee.getGrossSales()
         << "\nTaxa de comissão: " << employee.getCommissionRate()
         << "\nSalário base: R$" << employee.getBaseSalary() << endl;

    // Atualiza o salário-base
    employee.setBaseSalary(1000);

    cout << "\nInformações atualizadas do funcionário exibidas pela função print:\n"
         << endl;
    employee.print(); // Exibe as novas informações do empregado

    // Exibe os rendimentos do empregado
    cout << "\n\nGanhos do funcionário: R$" << employee.earnings() << endl;

    return 0;
}
