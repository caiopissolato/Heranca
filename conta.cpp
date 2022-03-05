#include "conta.h"

Conta::Conta(std::string nome, int numero, double saldo){
    this->nome = nome;
    this->numero = numero;
    this->saldo = saldo;
}
std::string Conta::getNome(){return this->nome;}
int Conta::getNumero(){return this->numero;}
double Conta::getSaldo(){return this->saldo;}

