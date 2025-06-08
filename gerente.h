#include "funcionario.h"

class Gerente : public Funcionario {
    private: // Atributos privados
        float bonusMensal;
        float salarioFinal;

    public: // Métodos públicos
        float calcularSalarioFinal();
        void exibirInformacoes();

        // Método setter
        void setBonusMensal(float bonus);

        // Método getter
        float getBonusMensal();

        Gerente(int id = 0, string nome = "", float bonus = 0, float salario = 0);
};