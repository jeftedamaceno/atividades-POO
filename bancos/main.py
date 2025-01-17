from classes.clientes import Cliente 
from classes.bancos import Banco
from classes.contas import Conta, ContaEspecial
from classes.listaUnica import *

banco = Banco("Banco Santander")
banco2 = Banco("Banco Digital")
bancos_lista_unica = ListaÚnica(Banco)

joão=Cliente("João da Silva", "777-1234") 
maria=Cliente("Maria da Silva", "555-4321") 
Jefte = Cliente("Jefte Moura", "123.456.789-00")
ana = Cliente("Ana Silva", "987.654.321-00")
conta1=Conta([joão], 1, 1000) 
conta2=ContaEspecial([maria], 1, 500)
conta3 = Conta([Jefte], 1, 700) 

banco.abre_conta(conta1)
banco.abre_conta(conta2)
banco2.abre_conta(conta3)

bancos_lista_unica.adiciona(banco)
bancos_lista_unica.adiciona(banco2)

conta1.saque(50) 
conta2.deposito(300) 
conta3.saque(380)
 
conta1.extrato() 
conta2.extrato()
conta3.extrato()
