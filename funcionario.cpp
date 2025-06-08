#include <iostream>
#include <string>
#include "funcionario.h"
using namespace std;

// Métodos setters
void Funcionario::setNome(string nome){
    this->nome = nome;
}

void Funcionario::setSalarioBase(float salario){
    if (salario < 0) {
        cout << "Salário não pode ser negativo." << endl;
        // Verifica se o salário é negativo
    } else {
        salarioBase = salario;
    }
}

void Funcionario::setId(int id){
    if (id < 0) {
        cout << "ID não pode ser negativo" << endl;
        // Verifica se o ID é negativo
    } else {
        this->id = id;
    }
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