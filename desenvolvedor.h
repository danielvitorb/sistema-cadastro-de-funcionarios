#include "funcionario.h"

class Desenvolvedor : public Funcionario{
    private: // Atributos privados
        int quantidadeDeProjetos;
        float salarioFinal;

    public: // Métodos públicos
        float calcularSalarioFinal();
        void exibirInformacoes();

        // Método getter
        int getQuantidadeDeProjetos();

        // Método setter
        void setQuantidadeDeProjetos(int projetos);

        // Construtor
        Desenvolvedor(int id = 0, string nome = "", int projetos = 0, float salario = 0);
};