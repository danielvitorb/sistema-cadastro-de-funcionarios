#include "funcionario.h"

class Estagiario : public Funcionario {
    private:
        int horasTrabalhadas;
        float salarioFinal;
    public:
        float calcularSalarioFinal();
        void exibirInformacoes();

        // Método getter
        int getHorasTrabalhadas();

        // Método setter
        void setHorasTrabalhadas();

        // Construtor
        Estagiario(int id, string nome, int horas, float salario);
};