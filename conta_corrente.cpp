#include "conta_corrente.h"

ContaCorrente::ContaCorrente(std::string no, int nu, double sa, double lim);
: ::Conta(no, nu, sa){//chama o construtor da classe pai
    this->limite = lim;//inicializa limite

}
double ContaCorrente::getLimite();{return this->limite;}

double Conta::Corrente::getSaldo(){
    //double aux = this->limite + Conta::getSaldo(); se saldo for privado
    double aux = this->limite + Conta::saldo;
    return aux;
}