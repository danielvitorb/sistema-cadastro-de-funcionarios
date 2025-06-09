#include <iostream>
#include "funcionario.h"
#include "desenvolvedor.h"
#include "gerente.h"
#include "estagiario.h"
using namespace std;

int main() {
    // Vetor de ponteiros para 10 funcionários
    Funcionario *vetor[10];

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
    for (int i = 0; i < n; i++){
        cout << "Que tipo de funcionário você quer cadastrar? (digite D para desenvolvedor, E para estagiário e G para gerente)" << endl;
        cin >> tipo;
        while (tipo != 'D' && tipo != 'E' && tipo != 'G'){
            cout << "Digite um tipo de funcionário válido (D = desenvolvedor, E = estagiário, G = gerente)" << endl;
            cin >> tipo;
        }
        switch (tipo) {
            case 'D':
                vetor[i] = new Desenvolvedor;
            break; 

            case 'E':
                vetor[i] = new Estagiario;
            break;

            case 'G':
                vetor[i] = new Gerente;
            break;
        }
    }

    return 0;
}