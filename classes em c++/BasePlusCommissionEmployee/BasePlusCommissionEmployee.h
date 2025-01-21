// Definição da classe BasePlusCommissionEmployee representa um empregado
// que recebe um salário-base além da comissão.
#ifndef BASEPLUS_H
#define BASEPLUS_H

#include <string> // Classe string padrão C++
using std::string;

class BasePlusCommissionEmployee {
public:
    BasePlusCommissionEmployee(const string &, const string &,
                               const string &, double = 0.0, double = 0.0, double = 0.0);

    void setFirstName(const string &); // Configura o nome
    string getFirstName() const; // Retorna o nome

    void setLastName(const string &); // Configura o sobrenome
    string getLastName() const; // Retorna o sobrenome

    void setSocialSecurityNumber(const string &); // Configura o SSN (número de segurança social)
    string getSocialSecurityNumber() const; // Retorna o SSN

    void setGrossSales(double); // Configura a quantidade de vendas brutas
    double getGrossSales() const; // Retorna a quantidade de vendas brutas

    void setCommissionRate(double); // Configura a taxa de comissão
    double getCommissionRate() const; // Retorna a taxa de comissão

    void setBaseSalary(double); // Configura o salário-base
    double getBaseSalary() const; // Retorna o salário-base

    double earnings() const; // Calcula os rendimentos
    void print() const; // Imprime o objeto BasePlusCommissionEmployee

private:
    string firstName;
    string lastName;
    string socialSecurityNumber;
    double grossSales; // Vendas brutas semanais
    double commissionRate; // Porcentagem da comissão
    double baseSalary; // Salário-base
}; // Fim da classe BasePlusCommissionEmployee

#endif
