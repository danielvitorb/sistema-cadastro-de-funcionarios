#ifndef DESENVOLVEDOR_H
#define DESENVOLVEDOR_H
#include "funcionario.h"

class Desenvolvedor : public Funcionario{
    private: // Atributos privados
        int quantidadeDeProjetos;
        float salarioFinal;

    public: // Métodos públicos
        // Construtor
        Desenvolvedor(int id = 0, string nome = "", int projetos = 0, float salario = 0);

        float calcularSalarioFinal();
        void exibirInformacoes();

        // Método setter para quantidade de projetos
        void setQuantidadeDeProjetos(int projetos);

        // Método getter para quantidade de projetos
        int getQuantidadeDeProjetos();
};

#endif