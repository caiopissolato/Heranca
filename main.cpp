#include "conta_corrente.h"
#include <iostream>

using std::cout;

int main(){
    Conta c1("Joao", 111, 1000.0);
    ContaCorrente cc1("Maria",222, 3000.0, 1000.0);//ContaCorrente e' filha de conta

    cout<<"\nC1.nome = "<<c1.getNome();
    cout<<"\nC1.numero = "<<c1.getNumero();
    cout<<"\nC1.saldo = "<<c1.getSaldo();

    cout<<"\nCC1.nome = "<<cc1.getNome();
    cout<<"\nCC1.numero = "<<cc1.getNumero();
    cout<<"\nCC1.saldo = "<<cc1.getSaldo();
    cout<<"\nCC1.limite = "<<cc1.getLimite();
    cout<<"\nSaldo total CC: "<<cc1.getSaldoCC();

    return 0;
}