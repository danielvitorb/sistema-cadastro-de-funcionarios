#ifndef ESTAGIARIO_H
#define ESTAGIARIO_H
#include "funcionario.h"

class Estagiario : public Funcionario {
    private: // Atributos privados
        int horasTrabalhadas;
        float salarioFinal;

    public: // Métodos públicos
        // Construtor
        Estagiario(int id = 0, string nome = "", int horas = 0, float salario = 0);

        float calcularSalarioFinal();
        void exibirInformacoes();

        // Método setter para horasTrabalhadas
        void setHorasTrabalhadas(int horas);

        // Método getter para horasTrabalhadas
        int getHorasTrabalhadas();
};

#endif