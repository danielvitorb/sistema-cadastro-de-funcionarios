#include <string>
using namespace std;

class Funcionario {
    protected: // Atributos protegidos
        string nome;
        string tipo;
        float salarioBase;

    private: // Atributo privado
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
        virtual float calcularSalarioFinal() = 0; // Método virtual puro
};