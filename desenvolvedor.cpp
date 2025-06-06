#include <iostream>
#include "desenvolvedor.h"

// Construtor
Desenvolvedor::Desenvolvedor(int id, string nome, int projetos, float salario){
    setId(id);
    this->nome = nome;
    quantidadeDeProjetos = projetos;
    salarioBase = salario;
    tipo = "Desenvolvedor";
    salarioFinal = 0;
}

float Desenvolvedor::calcularSalarioFinal(){
    salarioFinal = salarioBase + (500 * quantidadeDeProjetos);
    return salarioFinal;
}

int Desenvolvedor::getQuantidadeDeProjetos(){
    return quantidadeDeProjetos;
}

float Desenvolvedor::getSalarioFinal(){
    return salarioFinal;
}

void Desenvolvedor::exibirInformacoes(){
    cout << "ID: " << getId() << endl;
    cout << "Nome: " << nome << endl;
    cout << "Tipo: " << tipo << endl;
    cout << "Projetos: " << quantidadeDeProjetos << endl;
    cout << "Salário base: " << salarioBase << endl;
    cout << "Salário final: " << calcularSalarioFinal() << endl;
}