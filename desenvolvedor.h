#include "funcionario.h"

class Desenvolvedor : public Funcionario{
    private:
        int quantidadeDeProjetos;
        float salarioFinal;

    public:
        float calcularSalarioFinal();
        void exibirInformacoes();

        // Métodos getters
        int getQuantidadeDeProjetos();
        float getSalarioFinal();

        Desenvolvedor(int id = 0, string nome = "", int projetos = 0, float salario = 0);
};