#include <string>
#include "Empregado.hpp"
class Engenheiro : public Empregado{
  public:
    Engenheiro (std::string nome, double salarioHora, int projetos) : Empregado(nome,salarioHora), projetos(projetos) {}

  protected:
    int projetos;

  public:
    void setProjetos(int projetos) {
      this->projetos = projetos;
    }

    int getProjetos() {
      return this->projetos;
    }

    void getEmpregadoInfo(double horasTrabalhadas) {
      Empregado::getEmpregadoInfo(horasTrabalhadas);
      std::cout << "Projetos: " << this->getProjetos() << std::endl;
      std::cout << std::endl;
    };
};

