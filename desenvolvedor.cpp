#include <iostream>
#include "desenvolvedor.h"

float Desenvolvedor::calcularSalarioFinal(){
    salarioFinal = salarioBase + (500 * quantidadeDeProjetos);
}

int Desenvolvedor::getQuantidadeDeProjetos(){
    return quantidadeDeProjetos;
}

float Desenvolvedor::getSalarioFinal(){
    return salarioFinal;
}

string Desenvolvedor::getTipo(){
    return tipo;
}

void Desenvolvedor::exibirInformacoes(){
    cout << "ID: " << getId() << endl;
    cout << "Nome: " << nome << endl;
    cout << "Projetos: " << quantidadeDeProjetos << endl;
    cout << "Salário base: " << getSalarioBase() << endl;
    cout << "Salário final: " << getSalarioFinal() << endl;
}