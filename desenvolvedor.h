#include "funcionario.h"

class Desenvolvedor : public Funcionario{
    private:
        int quantidadeDeProjetos;
        float salarioFinal;

    public:
        float calcularSalarioFinal();
        void exibirInformacoes();
        int getQuantidadeDeProjetos();
        float getSalarioFinal();
        string getTipo();
};