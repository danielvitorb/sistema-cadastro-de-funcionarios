#include "funcionario.h"

class Gerente : public Funcionario {
    private:
        float bonusMensal;
        float salarioFinal;

    public:
        float calcularSalarioFinal();
        void exibirInformacoes();
};