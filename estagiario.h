#include "funcionario.h"

class Estagiario : public Funcionario {
    private: // Atributos privados
        int horasTrabalhadas;
        float salarioFinal;

    public: // Métodos públicos
        // Construtor
        Estagiario(int id, string nome, int horas, float salario);

        float calcularSalarioFinal();
        void exibirInformacoes();

        // Método setter para horasTrabalhadas
        void setHorasTrabalhadas(int horas);

        // Método getter para horasTrabalhadas
        int getHorasTrabalhadas();
};