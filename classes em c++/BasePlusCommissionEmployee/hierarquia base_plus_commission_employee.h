// Classe BasePlusCommissionEmployee derivada da classe CommissionEmployee.
#ifndef BASEPLUS_H
#define BASEPLUS_H

#include <string> // Classe string padrão C++
using std::string;

#include "CommissionEmployee.h" // Declaração da classe CommissionEmployee

class BasePlusCommissionEmployee : public CommissionEmployee {
public:
    // Construtor
    BasePlusCommissionEmployee(const string &firstName, const string &lastName,
                               const string &socialSecurityNumber, 
                               double grossSales = 0.0, double commissionRate = 0.0, 
                               double baseSalary = 0.0);

    void setBaseSalary(double);      // Configura o salário-base
    double getBaseSalary() const;    // Retorna o salário-base

    double earnings() const;         // Calcula os rendimentos
    void print() const;              // Imprime o objeto BasePlusCommissionEmployee

private:
    double baseSalary;               // Salário-base
}; // Fim da classe BasePlusCommissionEmployee

#endif
