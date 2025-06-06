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

string Funcionario::getTipo(){
    return tipo;
}

float Funcionario::getSalarioBase(){
    return salarioBase;
}

int Funcionario::getId(){
    return id;
}


// Método virtual
void Funcionario::exibirInformacoes(){
    cout << "ID: " << id << endl;
    cout << "Nome: " << nome << endl;
    cout << "Salário Base: " << salarioBase << endl;
}