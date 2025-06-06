#include <string>
using namespace std;

class Funcionario {
    protected: // Atributos protected
        string nome;
        string tipo;
        float salarioBase;

    private: // Atributo private
        int id;

    public: // Métodos públicos
    
        // Métodos setters
        void setNome(string nome);
        void setSalarioBase(float salario);
        void setId(int id);

        // Métodos getters
        string getNome();
        string getTipo();
        float getSalarioBase(); 
        int getId();

        // Métodos virtuais
        virtual void exibirInformacoes();
        virtual float calcularSalarioFinal() = 0;
};