#include <iostream>
#include <cmath>
#include <iomanip>
#include "estagiario.h"


// Construtor
Estagiario::Estagiario(int id, string nome, int horas, float salario){
    setId(id < 0 ? 0 : id);
    this->nome = nome;
    setHorasTrabalhadas(horas < 0 ? 0 : horas);
    setSalarioBase(salario < 0 ? 0 : salario);
    tipo = "Estagiário";
}


// Implementação de calcularSalarioFinal()
float Estagiario::calcularSalarioFinal(){
    salarioFinal = floor((salarioBase * ((float)horasTrabalhadas / 160)) * 100) / 100;
    return salarioFinal;
}


// Sobrescrita de exibirInformações()
void Estagiario::exibirInformacoes(){
    cout << fixed << setprecision(2);
    cout << "ID: " << getId() << endl;
    cout << "Nome: " << nome << endl;
    cout << "Tipo: " << tipo << endl;
    cout << "Horas trabalhadas: " << horasTrabalhadas << endl;
    cout << "Salário base: " << salarioBase << endl;
    cout << "Salário final: " << calcularSalarioFinal() << endl;
}


// Método setter para horasTrabalhadas
void Estagiario::setHorasTrabalhadas(int horas){
    if (horas < 0){
        cout << "Horas trabalhadas não pode ser um valor negativo" << endl;
    } else {
        horasTrabalhadas = horas;
    }
}


// Método getter para horasTrabalhadas
int Estagiario::getHorasTrabalhadas(){
    return horasTrabalhadas;
}