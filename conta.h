#ifndef CONTA_H
#define CONTA_H

#include <string>

class Conta{
    private:
        std::string nome;
        int numero;
    
    protected:
        double saldo;//classes filhas tbm tem acesso

    public:
        Conta(std::string nome, int numero, double saldo);
        std::string getNome();
        int getNumero();
        double getSaldo();
};
#endif