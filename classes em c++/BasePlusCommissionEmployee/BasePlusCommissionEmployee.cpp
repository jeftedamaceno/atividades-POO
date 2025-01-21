// Definições de função-membro da classe BasePlusCommissionEmployee.
#include <iostream>
using std::cout;

// Definição da classe BasePlusCommissionEmployee
#include "BasePlusCommissionEmployee.h"

// Construtor
BasePlusCommissionEmployee::BasePlusCommissionEmployee(
    const string &first, const string &last, const string &ssn,
    double sales, double rate, double salary) {
    firstName = first; // Deve validar
    lastName = last; // Deve validar
    socialSecurityNumber = ssn; // Deve validar
    setGrossSales(sales); // Valida e armazena as vendas brutas
    setCommissionRate(rate); // Valida e armazena a taxa de comissão
    setBaseSalary(salary); // Valida e armazena o salário-base
} // Fim do construtor BasePlusCommissionEmployee

// Configura o nome
void BasePlusCommissionEmployee::setFirstName(const string &first) {
    firstName = first; // Deve validar
} // Fim da função setFirstName

// Retorna o nome
string BasePlusCommissionEmployee::getFirstName() const {
    return firstName;
} // Fim da função getFirstName

// Configura o sobrenome
void BasePlusCommissionEmployee::setLastName(const string &last) {
    lastName = last; // Deve validar
} // Fim da função setLastName

// Retorna o sobrenome
string BasePlusCommissionEmployee::getLastName() const {
    return lastName;
} // Fim da função getLastName

// Configura o SSN (número de segurança social)
void BasePlusCommissionEmployee::setSocialSecurityNumber(const string &ssn) {
    socialSecurityNumber = ssn; // Deve validar
} // Fim da função setSocialSecurityNumber

// Retorna o SSN
string BasePlusCommissionEmployee::getSocialSecurityNumber() const {
    return socialSecurityNumber;
} // Fim da função getSocialSecurityNumber

// Configura a quantidade de vendas brutas
void BasePlusCommissionEmployee::setGrossSales(double sales) {
    grossSales = (sales < 0.0) ? 0.0 : sales;
} // Fim da função setGrossSales

// Retorna a quantidade de vendas brutas
double BasePlusCommissionEmployee::getGrossSales() const {
    return grossSales;
} // Fim da função getGrossSales

// Configura a taxa de comissão
void BasePlusCommissionEmployee::setCommissionRate(double rate) {
    commissionRate = (rate > 0.0 && rate < 1.0) ? rate : 0.0;
} // Fim da função setCommissionRate

// Retorna a taxa de comissão
double BasePlusCommissionEmployee::getCommissionRate() const {
    return commissionRate;
} // Fim da função getCommissionRate

// Configura o salário-base
void BasePlusCommissionEmployee::setBaseSalary(double salary) {
    baseSalary = (salary < 0.0) ? 0.0 : salary;
} // Fim da função setBaseSalary

// Retorna o salário-base
double BasePlusCommissionEmployee::getBaseSalary() const {
    return baseSalary;
} // Fim da função getBaseSalary

// Calcula os rendimentos
double BasePlusCommissionEmployee::earnings() const {
    return baseSalary + (commissionRate * grossSales);
} // Fim da função earnings

// Imprime o objeto BasePlusCommissionEmployee
void BasePlusCommissionEmployee::print() const {
    cout << "Funcionário com comissão e salário-base: " << firstName << ' '
         << lastName << "\nNúmero de segurança social: " << socialSecurityNumber
         << "\nVendas brutas: " << grossSales
         << "\nTaxa de comissão: " << commissionRate
         << "\nSalário-base: " << baseSalary;
} // Fim da função print
