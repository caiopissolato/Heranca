#include "conta.h"

class ContaCorrente: public Conta{
    private:
        double limite;
    
    public:
    ContaCorrente(std::string no, int nu, double sa, double lim);
    double getLimite();

    double getSaldo();
}