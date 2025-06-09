#ifndef GERENTE_H
#define GERENTE_H
#include "funcionario.h"

class Gerente : public Funcionario {
    private: // Atributos privados
        float bonusMensal;
        float salarioFinal;

    public: // Métodos públicos
        // Construtor
        Gerente(int id = 0, string nome = "", float bonus = 0, float salario = 0);

        float calcularSalarioFinal();
        void exibirInformacoes();

        // Método setter para bonusMensal
        void setBonusMensal(float bonus);

        // Método getter para bonusMensal
        float getBonusMensal();
};

#endif