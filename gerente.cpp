#include <iostream>
#include "gerente.h"

Gerente::Gerente(int id, string nome, float bonus, float salario){
    setId(id < 0 ? 0 : id);
    this->nome = nome;
    setBonusMensal(bonus < 0 ? 0 : bonus);
    setSalarioBase(salario < 0 ? 0 : salario);
    tipo = "Gerente";
    calcularSalarioFinal();
}


// Implementação de calcularSalarioFinal()
float Gerente::calcularSalarioFinal() {
    salarioFinal = salarioBase + bonusMensal;
    return salarioFinal;
}


// Método setter
void Gerente::setBonusMensal(float bonus){
    if (bonus < 0){
        cout << "Bônus não pode ser negativo" << endl;
        // Verifica se o bônus é negativo.
    } else {
        bonusMensal = bonus;
    }
}


// Sobrescrita de exibirInformações()
void Gerente::exibirInformacoes(){
    cout << "ID: " << getId() << endl;
    cout << "Nome: " << nome << endl;
    cout << "Tipo: " << tipo << endl;
    cout << "Bônus: " << bonusMensal << endl;
    cout << "Salário base: " << salarioBase << endl;
    cout << "Salário final: " << salarioFinal << endl;
}