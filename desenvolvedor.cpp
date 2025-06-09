#include <iostream>
#include <cmath>
#include <iomanip>
#include "desenvolvedor.h"

// Construtor
Desenvolvedor::Desenvolvedor(int id, string nome, int projetos, float salario){
    setId(id < 0 ? 0 : id);
    this->nome = nome;
    setQuantidadeDeProjetos(projetos < 0 ? 0 : projetos);
    setSalarioBase(salario < 0 ? 0 : salario);
    tipo = "Desenvolvedor";
}


// Implementação de calcularSalarioFinal()
float Desenvolvedor::calcularSalarioFinal(){
    salarioFinal = floor((salarioBase + (500 * quantidadeDeProjetos)) * 100) / 100;
    return salarioFinal;
}


// Sobrescrita de exibirInformações()
void Desenvolvedor::exibirInformacoes(){
    cout << fixed << setprecision(2);
    cout << "ID: " << getId() << endl;
    cout << "Nome: " << nome << endl;
    cout << "Tipo: " << tipo << endl;
    cout << "Projetos: " << quantidadeDeProjetos << endl;
    cout << "Salário base: " << salarioBase << endl;
    cout << "Salário final: " << calcularSalarioFinal() << endl;
}


// Método setter para quantidadeDeProjetos
void Desenvolvedor::setQuantidadeDeProjetos(int projetos){
    if (projetos >= 0) {
        quantidadeDeProjetos = projetos;
    } else {
        return; // Não permite quantidade negativa de projetos
    }
}


// Método getter para quantidadeDeProjetos
int Desenvolvedor::getQuantidadeDeProjetos(){
    return quantidadeDeProjetos;
}