#include "funcionario.h"

class Estagiario : public Funcionario {
    private:
        int horasTrabalhadas;
        float salarioFinal;
    public:
        float calcularSalarioFinal();
        void exibirInformacoes();
};