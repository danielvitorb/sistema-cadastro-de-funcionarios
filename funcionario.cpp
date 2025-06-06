#include <iostream>
#include <string>
#include <iomanip>
#include "funcionario.h"
using namespace std;

// Métodos setters
void Funcionario::setNome(string nome){
    this->nome = nome;
}

void Funcionario::setSalarioBase(float salario){
    salarioBase = salario;
}

void Funcionario::setId(int id){
    this->id = id;
}

// Métodos getters
string Funcionario::getNome(){
    return nome;
}

float Funcionario::getSalarioBase(){
    return salarioBase;
}

int Funcionario::getId(){
    return id;
}

void Funcionario::exibirInformacoes(){
    cout << "ID: " << getId() << endl;
    cout << "Nome: " << getNome() << endl;
    cout << "Salário Base: " << getSalarioBase() << endl;
}