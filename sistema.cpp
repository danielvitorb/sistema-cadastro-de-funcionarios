#include <iostream>
#include "funcionario.h"
#include "desenvolvedor.h"
#include "gerente.h"
#include "estagiario.h"
using namespace std;

int main() {
    // Vetor de ponteiros para 10 funcionários
    Funcionario *vetor[10];
    int id, horas, projetos;
    float salario, bonus;
    string nome;

    // Perguntando ao usuário quantos funcionários ele quer cadastrar
    int n;
    cout << "Quantos funcionários você quer cadastrar? (mínimo 6 e máximo 10)" << endl;
    cin >> n;
    while (n < 6 || n > 10){
        cout << "Só é possível cadastrar de 6 a 10 funcionários." << endl;
        cout << "Quantos funcionários você quer cadastrar? (mínimo 6 e máximo 10)" << endl;
        cin >> n;
    }
    
    char tipo;
    for (int i = 0; i < n; i++){ // Cadastro dos funcionários
        cout << endl;
        cout << "Que tipo de funcionário você quer cadastrar? (digite D para desenvolvedor, E para estagiário e G para gerente)" << endl;
        cin >> tipo;
        while (tipo != 'D' && tipo != 'E' && tipo != 'G'){
            cout << endl;
            cout << "Digite um tipo de funcionário válido (D = desenvolvedor, E = estagiário, G = gerente)" << endl;
            cin >> tipo;
        }
        switch (tipo) {
            case 'D':
                vetor[i] = new Desenvolvedor;

                cout << "ID: ";
                cin >> id;
                vetor[i]->setId(id);

                cout << "Nome: ";
                cin >> nome;
                vetor[i]->setNome(nome);

                cout << "Quantidade de projetos: ";
                cin >> projetos;
                dynamic_cast<Desenvolvedor*>(vetor[i])->setQuantidadeDeProjetos(projetos);

                cout << "Salário base: ";
                cin >> salario;
                vetor[i]->setSalarioBase(salario);
            break; 

            case 'E':
                vetor[i] = new Estagiario;

                cout << "ID: ";
                cin >> id;
                vetor[i]->setId(id);

                cout << "Nome: ";
                cin >> nome;
                vetor[i]->setNome(nome);

                cout << "Horas trabalhadas: ";
                cin >> horas;
                dynamic_cast<Estagiario*>(vetor[i])->setHorasTrabalhadas(horas); 

                cout << "Salário base: ";
                cin >> salario;
                vetor[i]->setSalarioBase(salario);
            break;

            case 'G':
                vetor[i] = new Gerente;

                cout << "ID: ";
                cin >> id;
                vetor[i]->setId(id);

                cout << "Nome: ";
                cin >> nome;
                vetor[i]->setNome(nome);

                cout << "Bônus mensal: ";
                cin >> bonus;
                dynamic_cast<Gerente*>(vetor[i])->setBonusMensal(bonus);

                cout << "Salário base: ";
                cin >> salario;
                vetor[i]->setSalarioBase(salario);
            break;
        }
    }

    // Exibição das informações
    for(int j = 0; j < n; j++){
        cout << endl;
        vetor[j]->exibirInformacoes();
    }

    return 0;
}