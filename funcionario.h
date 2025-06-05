#include <string>
using namespace std;

class Funcionario {
    protected:
        string nome;
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
};