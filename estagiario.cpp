#include "estagiario.h"
#include <cmath>

// Construtor
Estagiario::Estagiario(int id, string nome, int horas, float salario){
    setId(id < 0 ? 0 : id);
    this->nome = nome;
    setHorasTrabalhadas(horas < 0 ? 0 : horas);
    setSalarioBase(salario < 0 ? 0 : salario);
    tipo = "Estagiário";
    calcularSalarioFinal();
}


// Implementação de calcularSalarioFinal()
float Estagiario::calcularSalarioFinal(){
    salarioFinal = salarioBase * (horasTrabalhadas / 160);
    return salarioFinal;
}