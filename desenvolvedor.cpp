#include <iostream>
#include "desenvolvedor.h"

// Construtor
Desenvolvedor::Desenvolvedor(int id, string nome, int projetos, float salario){
    setId(id < 0 ? 0 : id);
    this->nome = nome;
    setQuantidadeDeProjetos(projetos < 0 ? 0 : projetos);
    setSalarioBase(salario < 0 ? 0 : salario);
    tipo = "Desenvolvedor";
    calcularSalarioFinal();
}


// Implementação de calcularSalarioFinal()
float Desenvolvedor::calcularSalarioFinal(){
    salarioFinal = salarioBase + (500 * quantidadeDeProjetos);
    return salarioFinal;
}


// Método get
int Desenvolvedor::getQuantidadeDeProjetos(){
    return quantidadeDeProjetos;
}


// Método set
void Desenvolvedor::setQuantidadeDeProjetos(int projetos){
    if (projetos >= 0) {
        quantidadeDeProjetos = projetos;
    } else {
        return; // Não permite quantidade negativa de projetos
    }
}


// Sobrescrita de exibirInformações()
void Desenvolvedor::exibirInformacoes(){
    cout << "ID: " << getId() << endl;
    cout << "Nome: " << nome << endl;
    cout << "Tipo: " << tipo << endl;
    cout << "Projetos: " << quantidadeDeProjetos << endl;
    cout << "Salário base: " << salarioBase << endl;
    cout << "Salário final: " << salarioFinal<< endl;
}