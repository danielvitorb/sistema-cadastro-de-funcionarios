#include "funcionario.h"
#include "desenvolvedor.h"
#include "gerente.h"
#include "estagiario.h"
using namespace std;

int main() {
    Estagiario est(102, "Carlos", 80, 1200);
    est.exibirInformacoes();
    return 0;
}