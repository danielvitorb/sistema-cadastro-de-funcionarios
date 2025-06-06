#include <string>
using namespace std;

class Funcionario {
    protected:
        string nome;
        string tipo;
        float salarioBase;
        
    private:
        int id;

    public:
        // Métodos setters
        void setNome(string nome);
        void setSalarioBase(float salario);
        void setId(int id);

        // Métodos getters
        string getNome();
        float getSalarioBase(); 
        int getId();

        // Métodos virtuais
        virtual void exibirInformacoes();
        virtual float calcularSalarioFinal() = 0;
};